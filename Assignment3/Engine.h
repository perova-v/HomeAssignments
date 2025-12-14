/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
 */

#ifndef ENGINE_H
#define ENGINE_H

class Engine
{

public:
    Engine(unsigned int power);
    unsigned int getPower() const;

private:
    unsigned int _power;
};

#endif
