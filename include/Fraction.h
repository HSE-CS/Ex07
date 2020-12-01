// Copyright 2020 Bekusov Mikhail

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;

    void normalize();

 public:
    explicit Fraction(int n = 0, int d = 1);

    Fraction(const Fraction &a);

    std::string getValue();

    int getNumerator();

    int getDenominator();

    Fraction &operator=(const Fraction &);

    Fraction operator/(const Fraction &);

    Fraction operator+(const Fraction &);

    Fraction operator*(const Fraction &);

    Fraction operator-(const Fraction &);
};

#endif  // INCLUDE_FRACTION_H_
