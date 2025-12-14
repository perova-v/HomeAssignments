/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 4
 */

#include "Transformer.h"

Transformer::Transformer()
    : _name("Transformer"), _level(0), _fuel(0), _engine(100), _weapon(nullptr)
{
}

Transformer::Transformer(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon)
    : _name(name), _level(level), _fuel(fuel), _engine(1000), _weapon(weapon)
{
}

Transformer::~Transformer()
{
}

bool Transformer::fire()
{
    std::cout << "[Transformer] fire call" << std::endl;
    return true;
}

bool Transformer::ultimate()
{
    std::cout << "[Transformer] ultimate call" << std::endl;
    return true;
}

bool Transformer::move()
{
    if (_fuel > 0)
    {
        _fuel--;
        return true;
    }
    return false;
}

std::string Transformer::getName() const
{
    return _name;
}

unsigned int Transformer::getLevel() const
{
    return _level;
}

unsigned int Transformer::getFuel() const
{
    return _fuel;
}

Weapon* Transformer::getWeapon() const
{
    return _weapon;
}

unsigned int Transformer::getEnginePower() const
{
    return _engine.getPower();
}

void Transformer::setWeapon(Weapon* weapon)
{
    _weapon = weapon;
}

void Transformer::setFuel(unsigned int fuel)
{
    _fuel = fuel;
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os << "Name: " << transformer._name << " Level: " << transformer._level << " Fuel: " << transformer._fuel;
    return os;
}
