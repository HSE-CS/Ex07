//  Copyright © 2020 Ksuvot. All rights reserved.
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  if (denominator == 0) this->denominator = 1;
  else
    this->denominator = denominator;
  if (this->numerator == 0) this->denominator = 1;
  this->normalize();
}

int commonDivisor(int numerator, int denominator) {
  while (numerator * denominator != 0) {
    if (numerator > denominator)
      numerator -= denominator;
    else
      denominator -= numerator;
  }
  return denominator + numerator;
}

void Fraction::normalize() {
  int divisor = commonDivisor(abs(this->numerator),
                              abs(this->denominator));
  this->numerator /= divisor;
  this->denominator /= divisor;
}

Fraction Fraction::operator+(const Fraction& temp) {
  return Fraction(this->numerator * temp.denominator
  + temp.numerator * this->denominator,
  this->denominator * temp.denominator);
}

Fraction Fraction::operator-(const Fraction& temp) {
  return Fraction(this->numerator * temp.denominator
  - temp.numerator * this->denominator,
  this->denominator * temp.denominator);
}

Fraction Fraction::operator*(const Fraction& temp) {
  return Fraction(this->numerator * temp.numerator,
                  this->denominator * temp.denominator);
}

Fraction Fraction::operator/(const Fraction& temp) {
  return Fraction(this->numerator * temp.denominator,
                  this->denominator * temp.numerator);
}

Fraction& Fraction::operator=(const Fraction& temp) {
  this->denominator = temp.denominator;
  this->numerator = temp.numerator;
  return *this;
}

std::string Fraction::getValue() const {
  if (this->denominator == 1 || this->numerator == 0)
    return std::to_string(this->numerator);
  return std::to_string(getNumerator()) + '/'
      + std::to_string(getDenominator());
}

int Fraction::getNumerator() const {
  return this->numerator;
}

int Fraction::getDenominator() const {
  return this->denominator;
}
