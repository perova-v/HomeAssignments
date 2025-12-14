/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Weapon.h"
#include "Engine.h"

class Transformer {

public:
    Transformer(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon);
    virtual ~Transformer();

    bool move();
    bool fire();

    std::string getName() const;
    unsigned int getLevel() const;
    unsigned int getFuel() const;
    void setWeapon(Weapon* weapon);
    Weapon* getWeapon() const;
    unsigned int getEnginePower() const;

protected:
    std::string _name;
    unsigned int _level;
    unsigned int _fuel;

private:
    Engine _engine;
    Weapon* _weapon;
};

#endif
