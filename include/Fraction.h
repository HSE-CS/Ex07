#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
class Fraction {
private:
    int numerator;
    int denominator;
    void normalize();
public:
    Fraction();
    explicit Fraction(int new_numerator, int new_denominator);
    Fraction(const Fraction& fraction);
    std::string getValue();
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction& fc);
    Fraction operator-(const Fraction& fc);
    Fraction operator*(const Fraction& fc);
    Fraction operator/(const Fraction& fc);
    Fraction operator=(const Fraction& fc);
};
#endif