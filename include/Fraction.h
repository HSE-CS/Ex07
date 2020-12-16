// Copyright 2020 Mushka Nikita

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cmath>
#include <iostream>
#include <string>

class Fraction{

private:
    int numerator, denominator;
    void normalize();


public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction&);
    int getNumerator();
    int getDenominator();
    std::string getValue();
    Fraction operator + (const Fraction&);
    Fraction operator - (const Fraction&);
    Fraction operator * (const Fraction&);
    Fraction operator / (const Fraction&);
    Fraction operator = (const Fraction&);
};

#endif  // INCLUDE_FRACTION_H_
