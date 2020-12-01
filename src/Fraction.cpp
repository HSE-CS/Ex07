// Copyright 2020 GHA Test Team
#include "Fraction.h"
#include <algorithm>

void Fraction::normalize() {
  if (denominator < 0) {
    denominator *= -1;
    numerator *= -1;
  }
  int temp = std::__gcd(numerator, denominator);
  numerator = numerator / temp;
  denominator = denominator / temp;
}

Fraction::Fraction(int numeration, int denominator) {
  this->numerator = numeration;
  this->denominator = denominator;
  this->normalize();
}

Fraction::Fraction(const Fraction &fr) {
  numerator = fr.numerator;
  denominator = fr.denominator;
}

std::string Fraction::getValue() {
  if (denominator != 1)
    return std::to_string(numerator) + "/" + std::to_string(denominator);
  return std::to_string(numerator);
}

int Fraction::getNumerator() {
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

Fraction Fraction::operator+(const Fraction &fr) {
  return Fraction(numerator * fr.denominator + fr.numerator * denominator,
   fr.denominator * denominator);
}

Fraction Fraction::operator-(const Fraction &fr) {
  return Fraction(numerator * fr.denominator - fr.numerator * denominator,
   fr.denominator * denominator);
}

Fraction Fraction::operator*(const Fraction &fr) {
  return Fraction(numerator *fr.numerator, denominator * fr.denominator);
}

Fraction Fraction::operator/(const Fraction &fr) {
  return Fraction(numerator * fr.numerator, denominator * fr.numerator);
}

Fraction& Fraction::operator=(const Fraction &fr) {
  denominator = fr.denominator;
  numerator = fr.numerator;
  return *this;
}
