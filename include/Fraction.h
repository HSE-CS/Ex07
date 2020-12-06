// Copyright 2020 VarginDimitry
#ifndef EX07_FRACTION_H
#define EX07_FRACTION_H

#include "string"

class Fraction {
private:
    int numerator = 0;
    int denominator = 1;
    int nod(int a, int b);
    int nok(int a, int b);
    void normalize();
public:
    Fraction();
    Fraction(int n, int d);
    Fraction(const Fraction &fraction);

    std::string getValue();
    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction& fraction);
    Fraction operator-(const Fraction& fraction);
    Fraction operator*(const Fraction& fraction);
    Fraction operator/(const Fraction& fraction);
    Fraction& operator=(const Fraction& fraction);
};


#endif //EX07_FRACTION_H
