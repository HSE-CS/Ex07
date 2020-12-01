// Copyright 2020 Smirnov Grigory
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include<iostream>
#include<string>

class Fraction {
 private:
  int numerator = 0, denominator = 1;
  void normalize();
 public:
  explicit Fraction(int num = 0, int den = 1);
  Fraction(const Fraction& f);
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction& f);
  Fraction operator-(const Fraction& f);
  Fraction operator*(const Fraction& f);
  Fraction operator/(const Fraction& f);
  Fraction& operator=(const Fraction& f);
};
#endif  // INCLUDE_FRACTION_H_
