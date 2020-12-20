// Copyright 2020 Dyryaev Daniil

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>
#include <iostream>

class Fraction {

private:
    int numerator, denominator;

    void normalize();

    
public:

    Fraction();

    Fraction(int numerator, int denominator);

    Fraction(const Fraction &fraction);

    std::string getValue();

    int getNumerator();

    int getDenominator();

    friend Fraction operator+(const Fraction &left, const Fraction &right);

    friend Fraction operator-(const Fraction &left, const Fraction &right);

    friend Fraction operator*(const Fraction &left, const Fraction &right);

    friend Fraction operator/(const Fraction &left, const Fraction &right);

    Fraction& operator=(const Fraction &fraction);
};

#endif  // INCLUDE_FRACTION_H_
