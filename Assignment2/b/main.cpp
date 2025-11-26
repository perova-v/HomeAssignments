/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 2b
 */



#include <iostream>
#include <string>
#include "calculator.h"

int main() {
    std::string input;
    
    std::cout << "Enter expression: ";
    std::getline(std::cin, input);

    if (input.empty()) {
	std::cout << "Empty input." << std::endl;
        return 0;
    }

    try {
        double result = evaluateRPN(input);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
