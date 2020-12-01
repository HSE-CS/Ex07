// Copyright 2020 Ryzhova
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int numerator = 0, int denominator = 1);
    Fraction(const Fraction&);
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction& operator=(const Fraction&);
};


#endif  // INCLUDE_FRACTION_H_