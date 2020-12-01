// Copyright 2020 OsmanovIslam
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int denominator = 0;
  int numerator = 0;
  void normalize();

 public:
  explicit Fraction(int numer = 0, int denom = 1);
  Fraction(const Fraction& frac);
  int getNumerator();
  int getDenominator();
  std::string getValue();

  Fraction operator+(const Fraction&);
  Fraction operator=(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
};

#endif  // INCLUDE_FRACTION_H_
