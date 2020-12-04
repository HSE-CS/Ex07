// Created by Ksuvot on 03.12.2020.
#include "Fraction.h"

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
  return Fraction(this->numerator * temp.denominator + temp.numerator * this->denominator,
                  this->denominator * temp.denominator);
}

Fraction Fraction::operator-(const Fraction& temp) {
  return Fraction(this->numerator * temp.denominator - temp.numerator * this->denominator,
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

string Fraction::getValue() const {
  if (this->denominator == 1 || this->numerator == 0)
    return to_string(this->numerator);
  return to_string(getNumerator()) + '/'
      + to_string(getDenominator());
}

int Fraction::getNumerator() const {
  return this->numerator;
}

int Fraction::getDenominator() const {
  return this->denominator;
}
