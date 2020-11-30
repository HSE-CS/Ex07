// Copyright 2020 sccc
#include <string>
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

class Fraction
{
 private:
    int numerator;
    unsigned int denominator;
    void normalize();
 public:
    Fraction();
    explicit Fraction(int _numerator, unsigned int denominator);
    Fraction(const Fraction& fraction);
    std::string getValue();
    int getNumerator() const;
    unsigned int getDenominator() const;
    Fraction operator+ (const Fraction& fc);
    Fraction operator- (const Fraction& fc);
    Fraction operator* (const Fraction& fc);
    Fraction operator/ (const Fraction& fc);
};
#endif
