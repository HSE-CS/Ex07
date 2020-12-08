//Copyright [2020] <Olesya Nikolaeva>

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cstring>
#include <iostream>
#include <string>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    explicit Fraction(int up = 0, int down = 1);
    Fraction(const Fraction& copy);
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator=(const Fraction&);
protected:
    void normalize();
};

#endif
