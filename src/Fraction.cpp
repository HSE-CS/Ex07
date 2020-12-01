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
  int nod = NOD(this->numerator, this->denuminator);
  this->numerator = this->numerator / nod;
  this->denuminator = this->denuminator / nod;
  return *this;
}

Fraction::Fraction(int numerator, int denumenator) {
  if (denuminator == 0)
    throw "Division by zero";
  this->numerator = numerator;
  this->denuminator = denumenator;
}

Fraction::Fraction(const Fraction& fr) {
  this->numerator = fr.numerator;
  this->denuminator = fr.denuminator;
}

std::string Fraction::getValue() {
  if (this->denuminator == 1)
    return std::to_string(numerator);
  return std::to_string(numerator) + "/" + std::to_string(denuminator);
}

int Fraction::getNumerator() {
  return this->numerator;
}

int Fraction::getDenuminator() {
  return this->denuminator;
}

Fraction Fraction::operator+(const Fraction& fr) {
  return 
    Fraction(this->numerator * fr.denuminator + fr.numerator * this->denuminator,
    this->denuminator * fr.denuminator).normalize();
}

Fraction Fraction::operator-(const Fraction& fr) {
  return 
    Fraction(this->numerator * fr.denuminator - fr.numerator * this->denuminator,
    this->denuminator * fr.denuminator).normalize();
}

Fraction Fraction::operator*(const Fraction& fr) {
  return Fraction(this->numerator * fr.numerator,
    this->denuminator * fr.denuminator).normalize();
}

Fraction Fraction::operator/(const Fraction& fr) {
  return Fraction(this->numerator * fr.numerator,
    this->denuminator / fr.denuminator).normalize();
}

Fraction Fraction::operator=(const Fraction& fr) {
  return Fraction(this->numerator = fr.numerator,
    this->denuminator = fr.denuminator);
}
