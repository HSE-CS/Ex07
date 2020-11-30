// Copyright 2020 Kartseva Marya
#pragma once
#define FRACTION_H
#ifdef FRACTION_H
#include <string>
#include <iostream>
class Fraction {
 private:
    int numerator, denominator;
    void normalize();
 public:
    explicit Fraction(int num = 0, int den = 1);
    Fraction(const Fraction& fraction);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fr);
    Fraction operator-(const Fraction& fr);
    Fraction operator*(const Fraction& fr);
    Fraction operator/(const Fraction& fr);
    Fraction operator=(const Fraction& fr);
};
#endif  // FRACTION_H
