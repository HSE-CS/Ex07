//
// Created by stoja on 15.12.2020.
//

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cmath>
#include <iostream>
#include <string>
using namespace std;
class Fraction{
private: int numerator, denominator;
    void normalize();

public: Fraction(int, int);
    Fraction();
    Fraction(const Fraction&);
    int getNumerator();
    int getDenominator();
    string getValue();
    Fraction operator + (const Fraction&);
    Fraction operator - (const Fraction&);
    Fraction operator * (const Fraction&);
    Fraction operator / (const Fraction&);
    Fraction operator = (const Fraction&);
};
#endif //INCLUDE_FRACTION_H_
