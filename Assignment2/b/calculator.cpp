/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 2b
 */


#include "calculator.h"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>

Stack::Stack(size_t size) {
    capacity = size;
    data = new double[capacity];
    topPtr = data; 
}

Stack::~Stack() {
    delete[] data;
}

void Stack::push(double value) {
    if (static_cast<size_t>(topPtr - data) >= capacity) {
        throw std::overflow_error("Stack overflow");
    }
    *topPtr = value;
    topPtr++;
}

double Stack::pop() {
    if (topPtr == data) {
        throw std::underflow_error("Stack underflow");
    }
    topPtr--;
    return *topPtr;
}

bool Stack::isEmpty() const {
    return topPtr == data;
}

double Stack::peek() const {
    if (topPtr == data) {
        throw std::underflow_error("Stack is empty");
    }
    return *(topPtr - 1);
}

double evaluateRPN(const std::string& expression) {
    Stack stack(100); 
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            stack.push(std::stod(token));
        } else {
            double operand2 = stack.pop();
            double operand1 = stack.pop();
            double result = 0.0;

            if (token == "+") result = operand1 + operand2;
            else if (token == "-") result = operand1 - operand2;
            else if (token == "*") result = operand1 * operand2;
            else if (token == "/") {
                if (operand2 == 0) throw std::runtime_error("Division by zero");
                result = operand1 / operand2;
            } else {
                throw std::invalid_argument("Unknown operator: " + token);
            }

            stack.push(result);
        }
    }

    double finalResult = stack.pop();
    if (!stack.isEmpty()) {
        throw std::runtime_error("Invalid expression format: too many operands");
    }

    return finalResult;
}
