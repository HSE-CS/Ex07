// Copyright 2020 Ryzhova
#include "Fraction.h"

#include <stdexcept>

int common_divisor(int num, int den) {
  while (num != den) {
    if (num > den)
      num = num - den;
    else
      den = den - num;
  }
  return num;
}

Fraction::Fraction(int numerator, int denominator) {
  if (denominator == 0) {
    throw std::invalid_argument("it's not good to divide by zero");
  }
  this->numerator = numerator;
  this->denominator = denominator;
  normalize();
}

Fraction::Fraction(const Fraction& second_fraction) {
  numerator = second_fraction.numerator;
  denominator = second_fraction.denominator;
}

int Fraction::getNumerator() const {
  return numerator;
}

int Fraction::getDenominator() const {
  return denominator;
}

std::string Fraction::getValue() const {
  if (denominator == 1 || numerator == 0)
    return std::to_string(this->numerator);
  return std::to_string(getNumerator()) + '/' + std::to_string(getDenominator());
}

void Fraction::normalize() {
  int divisor = common_divisor(abs(numerator), abs(denominator));
  numerator /= divisor;
  denominator /= divisor;
}

Fraction Fraction::operator+(const Fraction& tmp) {
  return Fraction(numerator * tmp.denominator + tmp.numerator * denominator,
                  denominator * tmp.denominator);
}

Fraction Fraction::operator-(const Fraction& tmp) {
  return Fraction(numerator * tmp.denominator - tmp.numerator * denominator,
                  denominator * tmp.denominator);
}

Fraction Fraction::operator*(const Fraction& tmp) {
  return Fraction(numerator * tmp.numerator, denominator * tmp.denominator);
}

Fraction Fraction::operator/(const Fraction& tmp) {
  return Fraction(numerator * tmp.denominator, denominator * tmp.numerator);
}

Fraction& Fraction::operator=(const Fraction& tmp) {
  denominator = tmp.denominator;
  numerator = tmp.numerator;
  return *this;
}