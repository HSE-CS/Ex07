// Copyright 2020 GHA Frac Team
#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

#include <iostream>
#include <string>

class Fraction {
private:
    int numerator, denominator;
    void normalize();
public:
    explicit Fraction(int _numerator = 0, int _denominator = 1);
    Fraction(const Fraction &_fraction);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction &_fraction);
    Fraction operator-(const Fraction &_fraction);
    Fraction& operator=(const Fraction &_fraction);
    Fraction operator*(const Fraction &_fraction);
    Fraction operator/(const Fraction &_fraction);
};
#endif // FRACTION_FRACTION_H
