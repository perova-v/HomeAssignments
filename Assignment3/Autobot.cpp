/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 4
 */

#include "Autobot.h"

Autobot::Autobot() : Transformer(), _role("None")
{
}

Autobot::Autobot(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, std::string role)
    : Transformer(name, level, fuel, weapon), _role(role)
{
}

bool Autobot::transform()
{
    std::cout << "[Autobot] transform: Car mode" << std::endl;
    return true;
}

bool Autobot::ultimate()
{
    std::cout << "[Autobot] ultimate: Team support" << std::endl;
    return true;
}

std::string Autobot::getRole() const
{
    return _role;
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Autobot " << autobot._name << " Role: " << autobot._role;
    return os;
}
