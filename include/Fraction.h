//  Copyright 2020 Dumarevskaya.
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <cstring>
#include <string>

class Fraction {
 private:
  int numerator;
  int denominator;
 public:
  explicit Fraction(int num = 0, int den = 1):
    numerator{num}, denominator{den}{};
  Fraction(const Fraction& new_f):
    numerator{ new_f.numerator }, denominator{ new_f.denominator }{};
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction& frac);
  Fraction operator-(const Fraction& frac);
  Fraction operator*(const Fraction& frac);
  Fraction operator/(const Fraction& frac);
  Fraction& operator=(const Fraction& frac);
 protected:
  Fraction normalize();
};

#endif  // INCLUDE_FRACTION_H_
