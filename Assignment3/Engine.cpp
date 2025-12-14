/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 4
 */

#include "Engine.h"

Engine::Engine(unsigned int power) : _power(power) {}

unsigned int Engine::getPower() const
{
    return _power;
}
