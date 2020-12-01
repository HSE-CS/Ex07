// Copyright 2020 Shelby Ltd.
#include "Fraction.h"
#include <cmath>
#include <stdexcept>

int Fraction::nod(int a, int b) {
  a = abs(a);
  b = abs(b);
  int min = a > b ? b : a;
  for (int i = min; i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      return i;
    }
  }
}

int Fraction::nok(int a, int b) {
  a = abs(a);
  b = abs(b);
  int nok = a < b ? b : a;
  while (nok % a != 0 || nok % b != 0) {
    nok++;
  }
  return nok;
}

void Fraction::normalize() {
  if (numerator == 0) {
    denominator = 1;
    return;
  }
  int nod = Fraction::nod(numerator, denominator);
  numerator /= nod;
  denominator /= nod;
}

Fraction::Fraction(int num, int den) {
  if (den == 0) {
    throw std::runtime_error("zero denominator");
  }
  numerator = num;
  denominator = den;
  normalize();
}
Fraction::Fraction(const Fraction& f) {
  numerator = f.numerator;
  denominator = f.denominator;
  normalize();
}

int Fraction::getDenominator() { return denominator; }

int Fraction::getNumerator() { return numerator; }

std::string Fraction::getValue() {
  if (denominator == 1) {
    return std::to_string(numerator);
  }
  return std::to_string(numerator) + '/' + std::to_string(denominator);
}

Fraction Fraction::operator+(const Fraction& f) {
  int nok = Fraction::nok(denominator, f.denominator);
  return Fraction(
      numerator * (nok / denominator) + f.numerator * (nok / f.denominator),
      nok);
}

Fraction Fraction::operator-(const Fraction& f) {
  int nok = Fraction::nok(denominator, f.denominator);
  return Fraction(
      numerator * (nok / denominator) - f.numerator * (nok / f.denominator),
      nok);
}

Fraction Fraction::operator*(const Fraction& f) {
  return Fraction(numerator * f.numerator, denominator * f.denominator);
}

Fraction Fraction::operator/(const Fraction& f) {
  return Fraction(numerator * f.denominator, denominator * f.numerator);
}

Fraction& Fraction::operator=(const Fraction& f) {
  numerator = f.numerator;
  denominator = f.denominator;
  return *this;
}
