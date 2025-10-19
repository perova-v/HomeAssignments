/*
 * Perova Varvara
 * student141846@student.sbpu.ru
 * My project number 1
 */

#include "hello.h"

#include <iostream>
#include <string>

void myproject::sayHello() {
        std::string name;
        std::cout << "Hello, world!" << std::endl;
        std::getline(std::cin, name);
        std::cout << "Hello, " << name << "!" <<  std::endl;
}
