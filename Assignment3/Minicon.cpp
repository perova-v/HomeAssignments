/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 4
 */

#include "Minicon.h"

Minicon::Minicon() : Transformer(), _isHidden(false)
{
}

Minicon::Minicon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, bool isHidden)
    : Transformer(name, level, fuel, weapon), _isHidden(isHidden)
{
}

bool Minicon::transform()
{
    std::cout << "[Minicon] transform: Weapon mode" << std::endl;
    return true;
}

bool Minicon::ultimate()
{
    std::cout << "[Minicon] ultimate: Power boost" << std::endl;
    return true;
}

bool Minicon::getHidden() const
{
    return _isHidden;
}

std::ostream& operator<<(std::ostream& os, const Minicon& minicon)
{
    os << "Minicon " << minicon._name << " Hidden: " << minicon._isHidden;
    return os;
}
