#pragma once

#include <string>

class Fraction {
 private:
  int numerator, denominator;

  static int nok(int, int);

  static int nod(int, int);

  void normalize();

 public:
  explicit Fraction(int num = 0, int den = 1);

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
