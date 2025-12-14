/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Minicon.h"
#include "Weapon.h"

int main() {
    Weapon blaster("Blaster", 50);
    Autobot optimus("Optimus", 10, 100, &blaster, "Leader");
    
    std::cout << "Created: " << optimus.getName() << std::endl;
    
    if (optimus.transform()) {
        std::cout << "Optimus transformed!" << std::endl;
    }
    
    return 0;
}
