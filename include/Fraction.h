// Copyright 2020 Nikita Stifeev
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>
#include <stdexcept>

class Fraction {
 private:
    int numerator;
    int denominator;
    int gcd(int number1, int number2) const;
    void normalize();
 public:
    explicit Fraction(int n = 0, int m = 1);
    Fraction(const Fraction& fraqtion);
    Fraction& operator=(const Fraction& fraqtion);
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction& fraqtion) const;
    Fraction operator-(const Fraction& fraqtion) const;
    Fraction operator*(const Fraction& fraqtion) const;
    Fraction operator/(const Fraction& fraqtion) const;
    std::string getValue() const;
};

#endif  // INCLUDE_FRACTION_H_
