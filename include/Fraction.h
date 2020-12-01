//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string.h>

class Fraction {
 private:
  int numerator;
  int denominator;
  void normalize();
 public:
  Fraction(int = 0, int = 1);
  Fraction(Fraction&);
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
