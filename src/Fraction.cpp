// Copyright 2020 Kuznetsov Mikhail
#include "Fraction.h"

void normalize() {
  int gcd = greatestCommonDivisor(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  if (denominator < 0) {
    numerator *= -1;
    denominator *= -1;
  }
}

explicit Fraction(int num = 0, int den = 1) :
  numerator(num), denominator(den)
{
  assert(den != 0);
}

Fraction(Fraction &fraction) :
  numerator(fraction.numerator), denominator(fraction.denominator)
{

}

std::string getValue() {
  std::ostringstream fractostr;
  fractostr << numerator << "/" << denominator;
  return fractostr.str();
}

int getNumerator() const {
  return numerator;
}

int getDenominator() const {
  return denominator;
}

Fraction operator+(const Fraction& fr) {
  return Fraction(numerator * fr.denominator + fr.numerator * denominator, denominator * fr.denominator);
}

Fraction operator-(const Fraction& fr) {
  return Fraction(numerator * fr.denominator - fr.numerator * denominator, denominator * fr.denominator);
}

Fraction operator*(const Fraction& fr) {
  return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}

Fraction operator/(const Fraction& fr) {
  return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}

Fraction operator=(const Fraction& fr) {
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

