// Created by Ksuvot on 03.12.2020.
#ifndef EX07_INCLUDE_FRACTION_H_
#define EX07_INCLUDE_FRACTION_H_

#include <stdexcept>
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class Fraction {
 private:
  int numerator, denominator;
  void normalize();
 public:
  explicit Fraction(int numerator = 0, int denominator = 1) {
    if (denominator == 0) {
      throw invalid_argument("it's not good to divide by zero");
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
  string getValue() const;
  int getNumerator() const;
  int getDenominator() const;
};

#endif //EX07_INCLUDE_FRACTION_H_