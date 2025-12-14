/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Weapon.h"
#include "Engine.h"

class Transformer
{
public:
    Transformer();
    Transformer(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon);
    virtual ~Transformer();

    virtual bool transform() = 0;
    virtual bool fire();
    virtual bool ultimate();

    bool move();

    std::string getName() const;
    unsigned int getLevel() const;
    unsigned int getFuel() const;
    Weapon* getWeapon() const;
    unsigned int getEnginePower() const;

    void setWeapon(Weapon* weapon);
    void setFuel(unsigned int fuel);

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

protected:
    std::string _name;
    unsigned int _level;
    unsigned int _fuel;

private:
    Engine _engine;
    Weapon* _weapon;
};

#endif
