#include "todo.h"
#include <stdexcept>

void TodoList::init() {
    // TODO: set size to 0 and all task pointers to nullptr
    size = 0;
    for (int i=0; i<MAX_TASKS; i++){
        tasks[i] = nullptr;
    }
}

void TodoList::destroy() {
    // TODO: delete all tasks and reset pointers
    for (int i=0; i<MAX_TASKS; i++){
        delete[] tasks[i];
        tasks[i] = nullptr;
    }
    size = 0;
}

int TodoList::string_length(const char* str) const {
    // TODO: return the number of characters before '\0'
    int i=0;
    while(str[i] != '\0'){
        i+=1;
    }

    return i;
}

void TodoList::string_copy(char* dest, const char* src) const {
    // TODO: copy characters from src to dest
    int copy_length = string_length(src);
    for (int i=0; i<copy_length + 1; i++){ // copy '\0' too.
        dest[i] = src[i];
    }
}

void TodoList::add_task(const char* task) {
    // TODO: if full, throw. otherwise allocate and copy new task
    if (size>=MAX_TASKS){
        throw std::invalid_argument("add_task problem alert!!");
    }
    int task_length = string_length(task);
    tasks[size] = new char[task_length+1];
    string_copy(tasks[size], task);

    size++;
}

void TodoList::remove_task(int index) {
    // TODO: check bounds, delete task, shift left
    if (index<0 || size<=index){
        throw std::invalid_argument("remove_task problem alert!!");
    }
    for (int i=index; i<size-1; i++){
        tasks[i] = tasks[i+1];
    }
    tasks[size-1] = nullptr; 

    size--;
}

const char** TodoList::get_pending_tasks(int& count) const {
    // TODO: set count and return task array
    count = size;
    return const_cast<const char**>(tasks);
}