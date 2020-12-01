// Copyright 2020 stick
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
    Fraction(int numerator=0, int denominator=1);
    Fraction(const Fraction& copy);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fraction);
    Fraction operator-(const Fraction& fraction);
    Fraction operator*(const Fraction& fraction);
    Fraction operator/(const Fraction& fraction);
    Fraction& operator=(const Fraction& fraction);
};
#endif  // INCLUDE_FRACTION_H_