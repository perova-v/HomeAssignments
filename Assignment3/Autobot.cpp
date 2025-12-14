/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#include "Autobot.h"

Autobot::Autobot(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, std::string role)
    : Transformer(name, level, fuel, weapon), _role(role) {}

bool Autobot::transform() { return true; }
std::string Autobot::getRole() const { return _role; }
