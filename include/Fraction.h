// Copyright 2020 Alexander Shirokov

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator, denominator;
  void normalize();
 public: 
  Fraction();
  explicit Fraction(int a, int b);
  Fraction(const Fraction&);
  std::string getValue();
  int getNumerator() const;
  int getDenominator() const;
  Fraction operator+(const Fraction& b);
  Fraction operator-(const Fraction& b);
  Fraction operator*(const Fraction& b);
  Fraction operator/(const Fraction& b);
  Fraction& operator=(const Fraction& b);
};

#endif  // INCLUDE_FRACTION_H_
