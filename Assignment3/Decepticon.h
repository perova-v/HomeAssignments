/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project 3
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "Transformer.h"

class Decepticon : public Transformer {

public:
    Decepticon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, unsigned int danger);
    bool fly();
    unsigned int getDangerLevel() const;

private:
    unsigned int _dangerLevel;
};

#endif
