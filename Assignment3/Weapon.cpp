/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#include "Weapon.h"

Weapon::Weapon(std::string type, unsigned int damage) : _type(type), _damage(damage) {}

std::string Weapon::getType() const { return _type; }
unsigned int Weapon::getDamage() const { return _damage; }
