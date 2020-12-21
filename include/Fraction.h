// Copyright 2020 Nikita Semaev
#include <stdio.h>
#include <iostream>
#include <string>


#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

class Fraction {
 private:
  int numerator, denominator;
  void normalize();

 public:
  Fraction(int numerator, int denominator);

  Fraction(const Fraction &);

  std::string getValue();

  int getNumerator();

  int getDenominator();

  friend Fraction operator+(const Fraction &left, const Fraction &right);

  friend Fraction operator-(const Fraction &left, const Fraction &right);

  friend Fraction operator*(const Fraction &left, const Fraction &right);

  friend Fraction operator/(const Fraction &left, const Fraction &right);
};

#endif  // INCLUDE_FRACTION_H_
