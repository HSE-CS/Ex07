// Copyright 2020 Grachev Alexander

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction&);
    std::string GetValue();
    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator=(const Fraction&);
};

#endif  // INCLUDE_FRACTION_H_
