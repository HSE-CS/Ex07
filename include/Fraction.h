// Copyright 2020 FOM
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    explicit Fraction(int num = 0, int den = 1)
        :numerator(num), denominator(den) {
        if (denominator == 0)
            throw;
    }
    Fraction(const Fraction& fptr);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fptr);
    Fraction operator-(const Fraction& fptr);
    Fraction operator*(const Fraction& fptr);
    Fraction operator/(const Fraction& fptr);
    Fraction& operator=(const Fraction& fptr);
};
#endif  // INCLUDE_FRACTION_H_
