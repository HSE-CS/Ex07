// Copyright 2020 jswark
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
  int numerator = 0, denominator = 0;

 public:
  explicit Fraction(int num = 0, int den = 1) {
    if (den == 0) {
      throw "arithmetic_error::divide_by_zero";
    }
    else {
      this->numerator = num;
      this->denominator = den;
    }
    normalize();
  }

  Fraction(const Fraction &fr)
      : numerator(fr.numerator), denominator(fr.denominator) {}
  void normalize();
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction &fr);
  Fraction operator-(const Fraction &fr);
  Fraction operator*(const Fraction &fr);
  Fraction operator/(const Fraction &fr);
  Fraction &operator=(const Fraction &fr);
};
int NOD(int M, int L);
#endif  // INCLUDE_FRACTION_H_
