// Copyright 2020 dash
#include "Fraction.h"
#include <iostream>
#include <algorithm>


Fraction::Fraction(int n, int d) {
  if (d == 0) {
    throw "Div by zero";
  } else {
	numerator = n;
	denominator = d;
  }
  this->normalize();
}

Fraction::Fraction(const Fraction& frac) {
  numerator = frac.numerator;
  denominator = frac.denominator;
}

void Fraction::normalize() {
  int a = abs(numerator);
  int b = abs(denominator);
  int gcd = 1;
  for (int i = 1; i <= fmin(a, b); i++) {
      if ((a % i == 0) && (b % i == 0)) {
        gcd = i;
      }
  }
  numerator /= gcd;
  denominator /= gcd;
}

std::string Fraction::getValue() {
  std::string res;
  if (denominator == 1) {
    res = std::to_string(numerator);
  } else {
    std::string num = std::to_string(numerator);
	std::string den = std::to_string(denominator);
	res += num;
	res += '/';
	res += den;
  }
  return res;
}

int Fraction::getNumerator() {
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

Fraction Fraction::operator+(const Fraction& frac) {
  Fraction c;
  int n = numerator * frac.denominator + frac.numerator * denominator;
  int d = frac.denominator * denominator;
  if (n == 0) {
	c = Fraction(0, 1);
  }
  else {
  c = Fraction(n, d);
  }
  return c;
}

Fraction Fraction::operator-(const Fraction& frac) {
  Fraction c;
  int n = numerator * frac.denominator - frac.numerator * denominator;
  int d = frac.denominator * denominator;
  if (n == 0) {
    c = Fraction(0, 1);
  }
  else {
  c = Fraction(n, d);
  }
  return c;
}

Fraction Fraction::operator*(const Fraction& frac) {
  return Fraction(numerator * frac.numerator, frac.denominator * denominator);
}

Fraction Fraction::operator/(const Fraction& frac) {
  return Fraction(numerator * frac.denominator, frac.numerator * denominator);
}

Fraction Fraction::operator=(const Fraction& frac) {
  numerator = frac.numerator;
  denominator = frac.denominator;
  return Fraction(numerator, denominator);
}
