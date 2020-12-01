// Copyright 2020 Lukicheva Polina
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator, denuminator;
  Fraction normalize();
 public:
  explicit Fraction(
    int numerator = 0,
    int denuminator = 1);
  Fraction(const Fraction& fr);
  std::string getValue();
  int getNumerator();
  int getDenuminator();
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction operator=(const Fraction&);
};
#endif  // INCLUDE_FRACTION_H_
