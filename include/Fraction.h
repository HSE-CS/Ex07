// Copyright 2020 PolinaP
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
    int numerator, denominator;
 public:
    Fraction();
    explicit Fraction(int a, int b);
    Fraction(const Fraction& a);
    void normalize();
    std::string getValue();
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction& b);
    Fraction operator-(const Fraction& b);
    Fraction operator*(const Fraction& b);
    Fraction operator/(const Fraction& b);
    Fraction operator=(const Fraction& b);
};

#endif  // INCLUDE_FRACTION_H_
