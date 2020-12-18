//RogozyanAnastasiya
#include "../include/Fraction.h"
#include <iostream>

void Fraction::normalize() {
  int tmp_num = numerator;
  int tmp_den = denominator;
  while ((tmp_num != 0) && (tmp_den != 0)) {
    if (tmp_num >= tmp_den) tmp_num %= tmp_den;
    else
      tmp_den %= tmp_num;
  }
  int gcd = tmp_num + tmp_den;
  numerator /= gcd;
  denominator /= gcd;
}

std::string Fraction::getValue() {
  normalize();
  if (!getNumerator())
    return "0";
  else if (getNumerator() == getDenominator())
    return "1";
  return std::to_string(getNumerator()) + "/"
  + std::to_string(getDenominator());
}

int Fraction::getNumerator() {
  normalize();
  return numerator;
}

int Fraction::getDenominator() {
  normalize();
  return denominator;
}

Fraction Fraction::operator+(const Fraction &frs) {
  int num = numerator * frs.denominator +
  frs.numerator * denominator;
  int den = frs.denominator * denominator;
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction Fraction::operator-(const Fraction &frs) {
  int num = numerator * frs.denominator -
  frs.numerator * denominator;
  int den = frs.denominator * denominator;
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction& Fraction::operator=(const Fraction& frs)  {
  numerator = frs.numerator;
  denominator = frs.denominator;
  return *this;
}

Fraction Fraction::operator*(const Fraction& frs) {
  int num = getNumerator() * frs.numerator;
  int den = getDenominator() * frs.denominator;
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction Fraction::operator/(const Fraction& frs) {
  int num = getNumerator() * frs.denominator;
  int den = getDenominator() * frs.numerator;
  Fraction temp = Fraction(num, den);
  return temp;
}
