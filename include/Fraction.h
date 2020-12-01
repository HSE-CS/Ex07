// Copyright 2020 Pasmanik Irina
#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;

 public:
    explicit Fraction(int a = 0, int b = 1);
    Fraction(const Fraction&);

    void normalize();
    std::string getValue();
    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction& operator=(const Fraction&);
};

#endif  // FRACTION_H
