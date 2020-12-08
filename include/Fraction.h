// Copyright 2020 Sharibzhanova Diana
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

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
#endif  // INCLUDE_FRACTION_H_
