// Copyright 2020 _
#pragma once
#include <exception>
#include <string>

class Fraction {
 private:
  int32_t numer, denom;
  void normalize();

 public:
  explicit Fraction(int32_t numer = 0, int32_t denom = 1)
      : numer(numer), denom(denom) {
    if (denom == 0) {
      throw "Divide by zero";
    }
    normalize();
  }
  Fraction(Fraction& other) : numer(other.numer), denom(other.denom) {}
  std::string getValue();
  int32_t getNumerator();
  int32_t getDenominator();
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction& operator=(const Fraction&);
};
