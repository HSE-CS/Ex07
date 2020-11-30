// Copyright 2020 Kuznetsov Mikhail
#include "Fraction.h"

void Fraction::normalize() {
  int gcd = greatestCommonDivisor(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  if (denominator < 0) {
    numerator *= -1;
    denominator *= -1;
  }
}

Fraction::Fraction(int num, int den)
  : numerator(num), denominator(den) {
    if (0 == den)
      throw "Division by zero!";
    normalize();
}

Fraction::Fraction(const Fraction &fraction)
    : numerator(fraction.numerator), denominator(fraction.denominator) {}

std::string Fraction::getValue() const {
  std::ostringstream fractostr;
  fractostr << numerator << "/" << denominator;
  return fractostr.str();
}

int Fraction::getNumerator() const {
  return numerator;
}

int Fraction::getDenominator() const {
  return denominator;
}

Fraction Fraction::operator+(const Fraction &fr) {
  return Fraction(numerator * fr.denominator +
                  fr.numerator * denominator,
                  denominator * fr.denominator);
}

Fraction Fraction::operator-(const Fraction &fr) {
  return Fraction(numerator * fr.denominator -
                  fr.numerator * denominator,
                  denominator * fr.denominator);
}

Fraction Fraction::operator*(const Fraction &fr) {
  return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}

Fraction Fraction::operator/(const Fraction &fr) {
  return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}

Fraction Fraction::operator=(const Fraction &fr) {
  numerator = fr.numerator;
  denominator = fr.denominator;
  normalize();
}

int greatestCommonDivisor(int a, int b) {
  a = abs(a);
  b = abs(b);
  if (!a)
    return b;
  if (!b)
    return a;
  return (b ? greatestCommonDivisor(b, a % b): a);
}
