/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
 */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
public:
    Weapon(std::string type, unsigned int damage);
    std::string getType() const;
    unsigned int getDamage() const;
private:
    std::string _type;
    unsigned int _damage;
};

#endif
