// Copyright 2020 PollyllyZh
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int numerator_ = 0, int denominator_ = 1);
    Fraction(const Fraction& fr);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fr);
    Fraction operator-(const Fraction& fr);
    Fraction operator*(const Fraction& fr);
    Fraction operator/(const Fraction& fr);
    Fraction operator=(const Fraction& fr);
};
#endif  // INCLUDE_FRACTION_H_
