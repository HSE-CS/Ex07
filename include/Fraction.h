// Copyright 2020 Grachev Alexander

#ifndef EX07_FRACTION_H
#define EX07_FRACTION_H

#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    void normalize();
public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction&);
    string GetValue();
    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator=(const Fraction&);
};


#endif //EX07_FRACTION_H
