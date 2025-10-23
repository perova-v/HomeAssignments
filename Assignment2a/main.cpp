/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 2a
 */

#include <iostream>
#include "file_reverse.h"

int main() {
    std::string inputFile;
    std::cout << "Enter the path of the source file: ";
    std::getline(std::cin, inputFile);

    fileReverse(inputFile);

    return 0;
}
