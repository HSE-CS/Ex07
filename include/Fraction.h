// Copyright 2020 valvarl

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_


#include <cassert>
#include <string>

class Fraction {
 private:
    int numerator, denominator;
    void normalize();
 public:
    explicit Fraction(int _numerator = 0, int _denominator = 1) :
    numerator(_numerator), denominator(_denominator) {
        denominator != 0 ? normalize() : throw std::runtime_error("DivisionByZero");
    }
    Fraction(const Fraction &fraction) :
    numerator(fraction.numerator), denominator(fraction.denominator) {}
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& f);
    Fraction operator-(const Fraction& f);
    Fraction operator*(const Fraction& f);
    Fraction operator/(const Fraction& f);
    Fraction& operator=(const Fraction& f);
};


#endif  // INCLUDE_FRACTION_H_
