// Copyright 2020 DBarinov
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>
#include <cstring>

class Fraction{
 private:
  int numerator, denominator;
 public:
  explicit Fraction(int n = 0, int d = 1);
  Fraction(const Fraction&);
  void normalize();
  std::string getValue() const;
  int getNumerator() const;
  int getDenominator() const;
  Fraction& operator=(const Fraction&);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
};

#endif  // INCLUDE_FRACTION_H_

