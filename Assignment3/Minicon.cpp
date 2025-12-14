/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#include "Minicon.h"

Minicon::Minicon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, bool isHidden)
    : Transformer(name, level, fuel, weapon), _isHidden(isHidden) {}

bool Minicon::hide() { 
    _isHidden = true;
    return true; 
}
