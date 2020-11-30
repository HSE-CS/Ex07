// Copyright 2020 <JiJa>
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
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

Fraction Fraction::operator+(const Fraction &frs) {
  int num = numerator * this->getDenominator() +
  this->getNumerator() * denominator;
  int den = this->getDenominator() * denominator;
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction Fraction::operator-(const Fraction &frs) {
  int num = numerator * this->getDenominator() -
  this->getNumerator() * denominator;
  int den = this->getDenominator() * denominator;
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction& Fraction::operator=(const Fraction& fr)  {
  numerator = fr.numerator;
  denominator = fr.denominator;
  return *this;
}

Fraction Fraction::operator*(const Fraction& fr) {
  int num = getNumerator() * this->getNumerator();
  int den = getDenominator() * this->getDenominator();
  Fraction temp = Fraction(num, den);
  return temp;
}

Fraction Fraction::operator/(const Fraction& fr) {
  int num = getNumerator() * this->getDenominator();
  int den = getDenominator() * this->getNumerator();
  Fraction temp = Fraction(num, den);
  return temp;
}
