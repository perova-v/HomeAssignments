/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project 4
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <iostream>

class Decepticon : public Transformer
{
public:
    Decepticon();
    Decepticon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, unsigned int danger);

    bool transform() override;
    bool fire() override;

    unsigned int getDangerLevel() const;

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);

private:
    unsigned int _dangerLevel;
};

#endif
