// Copyright 2020 Egor Trukhin
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator;
  int denominator;

  void normalize();

 public:
  explicit Fraction(int = 0, int = 1);
  Fraction(const Fraction&);
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction& operator=(const Fraction&);
};

#endif  // INCLUDE_FRACTION_H_
