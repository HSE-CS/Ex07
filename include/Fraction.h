// Copyright 2020 Stolbov Yaroslav

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cmath>
#include <iostream>
#include <string>
class Fraction{
  private: int numerator, denominator;
    void normalize();

  public: Fraction(int, int);
    Fraction();
    Fraction(const Fraction&);
    int getNumerator();
    int getDenominator();
    std::string getValue();
    Fraction operator + (const Fraction&);
    Fraction operator - (const Fraction&);
    Fraction operator * (const Fraction&);
    Fraction operator / (const Fraction&);
    Fraction operator = (const Fraction&);
};
#endif
