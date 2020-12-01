// Copyright 2020 Lukicheva Polina
#include "Fraction.h"

int NOD(int num, int den) {
  num = abs(num);
  den = abs(den);
  while (num * den != 0) {
    if (num > den)
      num -= den;
    else
      den -= num;
  }
  return den + num;
}

Fraction Fraction::normalize() {
  int nod = NOD(this->numerator, this->denominator);
  this->numerator = this->numerator / nod;
  this->denominator = this->denominator / nod;
  return *this;
}

Fraction::Fraction(int numerator, int denominator) {
  if (denominator == 0)
    throw "Division by zero";
  this->numerator = numerator;
  this->denominator = denominator;
}

Fraction::Fraction(const Fraction& fr) {
  this->numerator = fr.numerator;
  this->denominator = fr.denominator;
}

std::string Fraction::getValue() {
  if (this->denominator == 1)
    return std::to_string(numerator);
  return std::to_string(numerator) + "/" + std::to_string(denominator);
}

int Fraction::getNumerator() {
  return this->numerator;
}

int Fraction::getDenominator() {
  return this->denominator;
}

Fraction Fraction::operator+(const Fraction& fr) {
  Fraction
    res = Fraction(this->numerator *
      fr.denominator + fr.numerator * this->denominator,
      this->denominator * fr.denominator).normalize();
  return res;
}

Fraction Fraction::operator-(const Fraction& fr) {
  Fraction
    res = Fraction(this->numerator *
      fr.denominator - fr.numerator * this->denominator,
      this->denominator * fr.denominator).normalize();
  return res;
}

Fraction Fraction::operator*(const Fraction& fr) {
  return Fraction(this->numerator * fr.numerator,
    this->denominator * fr.denominator).normalize();
}

Fraction Fraction::operator/(const Fraction& fr) {
  return Fraction(this->numerator * fr.denominator,
    this->denominator * fr.numerator).normalize();
}

Fraction Fraction::operator=(const Fraction& fr) {
  return Fraction(this->numerator = fr.numerator,
    this->denominator = fr.denominator);
}
