#include "calculator.h"
#include <stdexcept>
#include <limits>

int Calculator::add(int a, int b) {
    // TODO
    long long int a_2 = a;
    long long int b_2 = b;
    if (a_2 + b_2 > std::numeric_limits<int>::max()){
        throw std::overflow_error("overflow");
    }
    if (a_2 + b_2 < std::numeric_limits<int>::min()){
        throw std::overflow_error("underflow");
    }
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    long long int a_2 = a;
    long long int b_2 = b;
    if (a_2 - b_2 > std::numeric_limits<int>::max()){
        throw std::overflow_error("overflow");
    }
    if (a_2 - b_2 < std::numeric_limits<int>::min()){
        throw std::overflow_error("underflow");
    }
    return a-b;
}

int Calculator::mul(int a, int b) {
    // TODO
    long long int a_2 = a;
    long long int b_2 = b;
    if (a_2 * b_2 > std::numeric_limits<int>::max()){
        throw std::overflow_error("overflow");
    }
    if (a_2 * b_2 < std::numeric_limits<int>::min()){
        throw std::overflow_error("underflow");
    }
    return a*b;
}

int Calculator::div(int a, int b) {
    // TODO
    if (b==0){
        throw std::invalid_argument("Division by zero");
    }
    long long int a_2 = a;
    long long int b_2 = b;
    if (a_2 / b_2 > std::numeric_limits<int>::max()){
        throw std::overflow_error("overflow");
    }
    if (a_2 / b_2 < std::numeric_limits<int>::min()){
        throw std::overflow_error("underflow");
    }
    return a/b;
}

