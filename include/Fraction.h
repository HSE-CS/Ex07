//Copyright 2020 dash
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int n = 0, int d = 1);
    Fraction(const Fraction& frac);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator +(const Fraction& frac);
    Fraction operator -(const Fraction& frac);
    Fraction operator *(const Fraction& frac);
    Fraction operator /(const Fraction& frac);
    Fraction operator =(const Fraction& frac);
};


#endif //INCLUDE_FRACTION_H_