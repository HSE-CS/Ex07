// Copyright 2020 GHA Test Team
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator, denominator;
  void normalize();
 public:
  explicit Fraction(int = 0, int = 1);
  Fraction(const Fraction &fr);
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction &fr);
  Fraction operator-(const Fraction &fr);
  Fraction operator*(const Fraction &fr);
  Fraction operator/(const Fraction &fr);
  Fraction &operator=(const Fraction &fr);
};

#endif  // INCLUDE_FRACTION_H_
