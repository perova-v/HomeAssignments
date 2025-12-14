/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project 3
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "Transformer.h"

class Autobot : public Transformer {

public:
    Autobot(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, std::string role);
    bool transform();
    std::string getRole() const;

private:
    std::string _role;
};

#endif
