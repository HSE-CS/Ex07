// Copyright 2020 Smirnov Grigory
#include "Fraction.h"

int nod(int a, int b) {
  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

void Fraction::normalize() {
  int norm = nod(abs(numerator), abs(denominator));
  numerator = numerator / norm;
  denominator = denominator / norm;
}

Fraction::Fraction(int num, int den) {
  if (den == 0)
    throw "Error: Division by 0";
  else {
    numerator = num;
    denominator = den;
    normalize();
  }
}

Fraction::Fraction(const Fraction& f) {
  numerator = f.numerator;
  denominator = f.denominator;
}

int Fraction::getNumerator() {
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

string Fraction::getValue() {
  if (denominator == 1)
    return to_string(numerator);
  else
    return to_string(numerator) + "\\" + to_string(denominator);
}

Fraction Fraction::operator+(const Fraction& f) {
  return Fraction(numerator * f.denominator + f.numerator * denominator, denominator * f.denominator);
}

Fraction Fraction::operator-(const Fraction& f) {
  return Fraction(numerator * f.denominator - f.numerator * denominator, denominator * f.denominator);
}

Fraction Fraction::operator*(const Fraction& f) {
  return Fraction(numerator * f.numerator, denominator * f.denominator);
}

Fraction Fraction::operator/(const Fraction& f) {
  return Fraction(numerator * f.denominator, denominator * f.numerator);
}

Fraction& Fraction::operator=(const Fraction& f) {
  denominator = f.denominator;
  numerator = f.numerator;
  return *this;
}