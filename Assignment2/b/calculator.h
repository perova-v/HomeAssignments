/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 2b
 */


#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <cstddef>

class Stack {
private:
    double* data;
    double* topPtr;
    size_t capacity;

public:
    Stack(size_t size);
    ~Stack();
    void push(double value);
    double pop();
    bool isEmpty() const;
    double peek() const;
};

double evaluateRPN(const std::string& expression);

#endif
