// Copyright 2020 Khoroshavina Ekaterina
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
    int numerator, denominator;
    void normalize();
 public:
    explicit Fraction(int numerator = 0, int denominator = 1) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction(const Fraction& new_fraction) {
        this->denominator = new_fraction.denominator;
        this->numerator = new_fraction.numerator;
    }
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fr);
    Fraction operator-(const Fraction& fr);
    Fraction operator*(const Fraction& fr);
    Fraction operator/(const Fraction& fr);
    Fraction& operator=(const Fraction& fr);
};

#endif  // INCLUDE_FRACTION_H_
