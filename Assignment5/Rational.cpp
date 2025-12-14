/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 5
 */

#include "Rational.h"
#include <numeric>
#include <stdexcept>

Rational::Rational(int num, int denom) : _num(num), _denom(denom)
{
    if (_denom == 0)
    {
        throw std::invalid_argument("Denominator cannot be 0");
    }
    simplify();
}

int Rational::getNum() const
{
    return _num;
}

int Rational::getDenom() const
{
    return _denom;
}

void Rational::simplify()
{
    if (_denom < 0)
    {
        _num = -_num;
        _denom = -_denom;
    }

    int common = std::gcd(std::abs(_num), _denom);
    _num /= common;
    _denom /= common;
}

Rational Rational::operator+(const Rational& other) const
{
    int new_num = _num * other._denom + other._num * _denom;
    int new_denom = _denom * other._denom;
    return Rational(new_num, new_denom);
}

Rational Rational::operator-(const Rational& other) const
{
    int new_num = _num * other._denom - other._num * _denom;
    int new_denom = _denom * other._denom;
    return Rational(new_num, new_denom);
}

Rational Rational::operator*(const Rational& other) const
{
    return Rational(_num * other._num, _denom * other._denom);
}

bool Rational::operator==(const Rational& other) const
{
    return _num == other._num && _denom == other._denom;
}

bool Rational::operator!=(const Rational& other) const
{
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    os << r._num << "/" << r._denom;
    return os;
}
