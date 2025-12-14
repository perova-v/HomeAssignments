/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
 */

#include "Decepticon.h"

Decepticon::Decepticon() : Transformer(), _dangerLevel(0)
{
}

Decepticon::Decepticon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, unsigned int danger)
    : Transformer(name, level, fuel, weapon), _dangerLevel(danger)
{
}

bool Decepticon::transform()
{
    std::cout << "[Decepticon] transform: Jet mode" << std::endl;
    return true;
}

bool Decepticon::fire()
{
    std::cout << "[Decepticon] fire: Heavy shot" << std::endl;
    return true;
}

unsigned int Decepticon::getDangerLevel() const
{
    return _dangerLevel;
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
    os << "Decepticon " << decepticon._name << " Danger: " << decepticon._dangerLevel;
    return os;
}
