/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 5
 */

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
public:
    Rational(int num = 0, int denom = 1);

    int getNum() const;
    int getDenom() const;

    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;

    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Rational& r);

private:
    int _num;
    int _denom;

    void simplify();
};

#endif
