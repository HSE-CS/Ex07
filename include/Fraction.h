//  Copyright © 2020 Ksuvot. All rights reserved.
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>
#include <iostream>

class Fraction {
 private:
  int numerator, denominator;
  void normalize();
 public:
  explicit Fraction(int numerator = 0, int denominator = 1);
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
