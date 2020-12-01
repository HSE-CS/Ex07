// Copyright 2020 mkhorosh
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <stdexcept>
#include <string>

class Fraction {
 private:
  int numerator;
  int denominator;
  Fraction normalize();

 public:
  explicit Fraction(int n = 0, int d = 1) {
    if (d == 0) {
      throw std::invalid_argument("dividing by zero");
    } else {
      numerator = n;
      denominator = d;
    }
  }
  Fraction(const Fraction &num) {
    numerator = num.getNumerator();
    denominator = num.getDenominator();
  }
  std::string getValue();
  int getNumerator() const;
  int getDenominator() const;
  Fraction operator+(const Fraction &);
  Fraction operator-(const Fraction &);
  Fraction operator*(const Fraction &);
  Fraction operator/(const Fraction &);
  Fraction operator=(const Fraction &);
};

#endif  // INCLUDE_FRACTION_H_
