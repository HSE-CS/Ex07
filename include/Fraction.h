// Copyright 2020 <Copyright NikDemoShow>
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include<sstream>
#include<iostream>
#include<string>

class Fraction {
 private:
int numerator, denominator;
  void normalize();
 public:
  Fraction();
  explicit Fraction(int new_numerator, int new_denominator);
  Fraction(const Fraction& F);
  std::string getValue() const;
  int getNumerator() const;
  int getDenominator() const;
};
int NOD(int a, int b);
Fraction operator+(const Fraction& a, const Fraction& b);
Fraction operator-(const Fraction& a, const Fraction& b);
Fraction operator*(const Fraction& a, const Fraction& b);
Fraction operator/(const Fraction& a, const Fraction& b);
#endif  // INCLUDE_FRACTION_H_
