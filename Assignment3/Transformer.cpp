/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#include "Transformer.h"

Transformer::Transformer(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon)
    : _name(name), _level(level), _fuel(fuel), _engine(1000), _weapon(weapon) {}

Transformer::~Transformer() {}

bool Transformer::move() {
    if (_fuel > 0) {
        _fuel--;
        return true;
    }
    return false;
}

bool Transformer::fire() {
    if (_weapon) return true;
    return false;
}

std::string Transformer::getName() const { return _name; }
unsigned int Transformer::getLevel() const { return _level; }
unsigned int Transformer::getFuel() const { return _fuel; }
void Transformer::setWeapon(Weapon* weapon) { _weapon = weapon; }
Weapon* Transformer::getWeapon() const { return _weapon; }
unsigned int Transformer::getEnginePower() const { return _engine.getPower(); }
