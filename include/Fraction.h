#ifndef EX07_FRACTION_H
#define EX07_FRACTION_H

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

#endif //EX07_FRACTION_H
