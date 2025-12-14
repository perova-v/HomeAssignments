/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project 4
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <iostream>

class Autobot : public Transformer
{
public:
    Autobot();
    Autobot(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, std::string role);

    bool transform() override;
    bool ultimate() override;

    std::string getRole() const;

    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);

private:
    std::string _role;
};

#endif
