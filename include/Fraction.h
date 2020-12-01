// Copyright 2020 Bekina Svetlana
#ifndef _INCLUDE_FRACTION_H_
#define _INCLUDE_FRACTION_H_

#include <string>

class Fraction {
public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction&);
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+ (const Fraction&);
    Fraction operator- (const Fraction&);
    Fraction operator* (const Fraction&);
    Fraction operator/ (const Fraction&);
    Fraction operator= (const Fraction&);
private:
    Fraction normalize();
    int numerator;
    int denominator;
};
int gcd(int, int);
#endif // INCLUDE_FRACTION_H_

