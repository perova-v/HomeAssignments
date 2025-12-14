/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 4
 */

#ifndef MINICON_H
#define MINICON_H

#include "Transformer.h"
#include <iostream>

class Minicon : public Transformer
{
public:
    Minicon();
    Minicon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, bool isHidden);

    bool transform() override;
    bool ultimate() override;

    bool getHidden() const;

    friend std::ostream& operator<<(std::ostream& os, const Minicon& minicon);

private:
    bool _isHidden;
};

#endif
