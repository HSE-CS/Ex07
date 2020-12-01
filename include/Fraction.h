// Copyright 2020 AndreyBakurskii
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>

class Fraction {
 private:
  int numerator = 0, denominator = 1;

 public:
  explicit Fraction(int num = 0, int den = 1) {
    if (den == 0) {
      throw "ZeroDivisionError: division by zero";
    } else {
      this->numerator = num;
      this->denominator = den;

      normalize();
    }
  }

  Fraction(const Fraction &frac) {
    this->numerator = frac.numerator;
    this->denominator = frac.denominator;

    normalize();
  }

  void normalize();
  std::string getValue();
  int getNumerator();
  int getDenominator();

  Fraction operator+(const Fraction &);
  Fraction operator-(const Fraction &);
  Fraction operator*(const Fraction &);
  Fraction operator/(const Fraction &);
  Fraction operator=(const Fraction &);
};

int NOD(int, int);

#endif  // INCLUDE_FRACTION_H_
