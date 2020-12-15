// Copyright 2020 Igor Tyulin
#ifndef EX07_FRACTION_H
#define EX07_FRACTION_H

#include <string>
#include <iostream>
class Fraction {
private:
    int numerator, denominator;
    void normalize();
public:
    explicit Fraction(
            int numerator = 0,
            int denominator = 1);
    Fraction(const Fraction& fr);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator=(const Fraction&);
};
#endif

