// Copyright 30.11.20 DenisKabanov

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>
#include <cmath>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int numerator = 0, int denominator = 1);
    Fraction(const Fraction &fraction);
    int getNumerator() const;
    int getDenominator() const;
    std::string getValue() const;
    Fraction operator+(const Fraction& fraction);
    Fraction operator-(const Fraction& fraction);
    Fraction operator*(const Fraction& fraction);
    Fraction operator/(const Fraction& fraction);
    Fraction operator=(const Fraction& fraction);
};

#endif  // INCLUDE_FRACTION_H_
