// Copyright 2017 Stanislav Stoianov

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cstdint>
#include <string>

class Fraction {
 private:
  int32_t numerator, denominator;

  void normalize();

 public:
  explicit Fraction(int32_t numerator = 0, int32_t denominator = 1)
      : numerator(numerator), denominator(denominator) {
    if (denominator == 0)
      throw "Exception in thread \"main\" ArithmeticException: Divide by zero";
    normalize();
  }

  Fraction(Fraction &fraction)
      : numerator(fraction.numerator), denominator(fraction.denominator){};

  std::string getValue() const;

  int32_t getNumerator() const;

    int32_t getDenominator() const;

    Fraction operator+(const Fraction &fraction) const;

    Fraction operator-(const Fraction &fraction) const;

    Fraction operator*(const Fraction &fraction) const;

    Fraction operator/(const Fraction &fraction) const;

    Fraction &operator=(const Fraction &fraction);

};

#endif  // INCLUDE_FRACTION_H_