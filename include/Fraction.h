// Copyright 2020 Kuznetsov Mikhail
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cmath>
#include <string>
#include <cassert>
#include <iostream>
#include <sstream>

class Fraction{
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int num = 0, int den = 1);
    Fraction(const Fraction &fraction);
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction &fr);
    Fraction operator-(const Fraction &fr);
    Fraction operator*(const Fraction &fr);
    Fraction operator/(const Fraction &fr);
    Fraction operator=(const Fraction &fr);
};

int greatestCommonDivisor(int a, int b);
#endif  // INCLUDE_FRACTION_H_
