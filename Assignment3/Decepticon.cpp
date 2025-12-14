/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#include "Decepticon.h"

Decepticon::Decepticon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, unsigned int danger)
    : Transformer(name, level, fuel, weapon), _dangerLevel(danger) {}

bool Decepticon::fly() { return true; }
unsigned int Decepticon::getDangerLevel() const { return _dangerLevel; }
