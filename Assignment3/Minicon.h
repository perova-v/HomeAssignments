/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 3
 */

#ifndef MINICON_H
#define MINICON_H
#include "Transformer.h"

class Minicon : public Transformer {

public:
    Minicon(std::string name, unsigned int level, unsigned int fuel, Weapon* weapon, bool isHidden);
    bool hide();

private:
    bool _isHidden;
};

#endif
