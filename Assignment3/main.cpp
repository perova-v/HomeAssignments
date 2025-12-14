/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Weapon.h"

int main()
{
    Weapon gun("Blaster", 100);

    Autobot bumblebee("Bumblebee", 5, 50, &gun, "Scout");
    Decepticon megatron("Megatron", 10, 100, nullptr, 9000);

    std::cout << "--- Objects info ---" << std::endl;
    std::cout << bumblebee << std::endl;
    std::cout << megatron << std::endl;

    std::cout << "\n--- Transformations ---" << std::endl;
    bumblebee.transform();
    megatron.transform();

    std::cout << "\n--- Polymorphism call ---" << std::endl;
    Transformer* ptr = &bumblebee;
    ptr->ultimate();

    return 0;
}
