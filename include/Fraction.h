// Copyright 2020 Kuznetsov Mikhail
#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

#include <cmath>
#include <string>
#include <cassert>
#include <iostream>
#include <sstream>

class Fraction{
 private:
   int numerator;
   int denominator;
   void normalize();
 public:
   explicit Fraction(int num = 0, int den = 1);
   Fraction(Fraction &fraction);
   std::string getValue();
   int getNumerator() const;
   int getDenominator() const;
   Fraction operator+(const Fraction& fr);
   Fraction operator-(const Fraction& fr);
   Fraction operator*(const Fraction& fr);
   Fraction operator/(const Fraction& fr);
   Fraction operator=(const Fraction& fr);
};

int greatestCommonDivisor(int a, int b);
#endif // FRACTION_H_INCLUDED
