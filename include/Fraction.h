//  Copyright © 2020 Ksuvot. All rights reserved.
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <stdexcept>
#include <string>
#include <stdio.h>
#include <iostream>

class Fraction {
 private:
  int numerator, denominator;
  void normalize();
 public:
  explicit Fraction(int numerator = 0, int denominator = 1) {
    if (denominator == 0) {
      throw std::invalid_argument("it's not good to divide by zero");
    }
    this->numerator = numerator;
    this->denominator = denominator;
    normalize();
  }
  Fraction(const Fraction &number) {
    this->numerator = number.getNumerator();
    this->denominator = number.getDenominator();
  }
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction& operator=(const Fraction&);
  std::string getValue() const;
  int getNumerator() const;
  int getDenominator() const;
};

#endif  // INCLUDE_FRACTION_H_
