// Copyright 2020 Lukicheva Polina
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator, denominator;
  Fraction normalize();
 public:
  explicit Fraction(
    int numerator = 0,
    int denominator = 1);
  Fraction(const Fraction& fr);
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction operator=(const Fraction&);
};
#endif  // INCLUDE_FRACTION_H_
