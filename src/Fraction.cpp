// Copyright 2020 <Copyright NikDemoShow>
#include "Fraction.h"

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}

Fraction::Fraction(int new_numerator, int new_denominator) {
  numerator = new_numerator;
  denominator = new_denominator;
  normalize();
}

Fraction::Fraction(const Fraction& F) {
  numerator = F.getNumerator();
  denominator = F.getDenominator();
}

void Fraction::normalize() {
  bool negative{ numerator * denominator < 0 ? true : false };
  int nod = NOD(abs(numerator), abs(denominator));
  numerator = abs(numerator) / nod;
  denominator = abs(denominator) / nod;
  negative ? numerator *= -1 : 0;
}

int NOD(int a, int b) {
  while (a && b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
  }
  return a + b;
}

int Fraction::getNumerator() const {
  return numerator;
}
int Fraction::getDenominator() const {
  return denominator;
}
std::string Fraction::getValue() const {
  std::stringstream stream;
  stream << numerator;
  if (denominator != 1) {
    stream << '/' << denominator;
  }
  return stream.str();
}

Fraction operator+(const Fraction& a, const Fraction& b) {
  int num, den;
  num = a.getNumerator() * b.getDenominator() +
     b.getNumerator() * a.getDenominator();
  den = a.getDenominator() * b.getDenominator();
  return Fraction(num, den);
}

Fraction operator-(const Fraction& a, const Fraction& b) {
  int num, den;
  num = a.getNumerator() * b.getDenominator() -
     b.getNumerator() * a.getDenominator();
  den = a.getDenominator() * b.getDenominator();
  return Fraction(num, den);
}

Fraction operator*(const Fraction& a, const Fraction& b) {
  int num, den;
  num = a.getNumerator() * b.getNumerator();
  den = a.getDenominator() * b.getDenominator();
  return Fraction(num, den);
}

Fraction operator/(const Fraction& a, const Fraction& b) {
  int num, den;
  num = a.getNumerator() * b.getDenominator();
  den = a.getDenominator() * b.getNumerator();
  return Fraction(num, den);
}
