// Copyright 2020 Igumnova Natasha
#include "Fraction.h"

int NOD(int a, int b) {
  while (a != 0 && b != 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  return a + b;
}
Fraction Fraction::normalize() {
  int nod = NOD(numerator, denominator);
  numerator /= nod;
  denominator /= nod;
  return *this;
}

std::string Fraction::getValue() {
  Fraction f = normalize();
  char char_num = f.numerator + '0';
  char char_den = f.denominator + '0';
  std::string(res);
  res.append(1, char_num);
  if (f.denominator != 1) {
    res.append(1, '\\');
    res.append(1, char_den);
  }
  return res;
}

int Fraction::getNumerator() const {
  return numerator;
}

int Fraction::getDenominator() const {
  return denominator;
}

Fraction Fraction::operator+(const Fraction& f) {
  return Fraction(numerator * f.denominator +
      f.numerator * denominator, denominator * f.denominator).normalize();
}

Fraction Fraction::operator-(const Fraction& f) {
  return Fraction(numerator * f.denominator -
      f.numerator * denominator, denominator * f.denominator).normalize();
}

Fraction Fraction::operator*(const Fraction& f) {
  return Fraction(numerator * f.numerator,
      denominator * f.denominator).normalize();
}

Fraction Fraction::operator/(const Fraction& f) {
  return Fraction(numerator * f.denominator,
      f.numerator * denominator).normalize();
}

Fraction Fraction::operator=(const Fraction& f) {
  numerator = f.numerator;
  denominator = f.denominator;
  return *this;
}
