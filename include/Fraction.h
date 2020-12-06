#ifndef FRACTION_H
#define FRACTION_H

#include <cmath>
#include <iostream>
#include <string>

class Fraction {
private:
    int numerator, denominator;
    void normalize();
public:
    Fraction(int, int);
    Fraction();
    Fraction(const Fraction&);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction& operator=(const Fraction&);
};

#endif