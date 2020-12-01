// Copyright 2020 Ozhiganova Polina
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  this->denominator = denominator;
}

Fraction::Fraction(const Fraction &new_fr) {
  this->numerator = new_fr.numerator;
  this->denominator = new_fr.denominator;
}

int find_nod(int numer, int denom) { // additional func
  if (numer < 0) {
    return 1;
  }
  while (numer != 0 and denom != 0) {
    if (numer > denom) {
      numer %= denom;
    } else {
      denom %= numer;
    }
  }
  return numer + denom;
}

Fraction Fraction::normalize() {
  int nod = find_nod(this->numerator, this->denominator);
  if (nod != 1) {
    this->numerator = this->numerator / nod;
    this->denominator = this->denominator / nod;
  }
  return *this;
}

std::string Fraction::getValue() {      // Дробь с единичным знаменателем выводится как целое число.
  normalize();
  if (this->denominator != 1) {
    return std::to_string(this->numerator) + '/' + std::to_string(this->denominator);
  } else {
    return std::to_string(this->numerator);
  }
}

int Fraction::getNumerator() const {   // вернуть числитель.
  return this->numerator;
}

int Fraction::getDenominator() const {
  return this->denominator;
}

Fraction Fraction::operator+(const Fraction &fr) {
  Fraction rez =
      Fraction(numerator * fr.denominator + fr.numerator * denominator, denominator * fr.denominator).normalize();
  return rez;
}

Fraction Fraction::operator-(const Fraction &fr) {
  Fraction
      rez = Fraction(numerator * fr.denominator - fr.numerator * denominator, denominator * fr.denominator).normalize();
  return rez;
}

Fraction Fraction::operator*(const Fraction &fr) {
  Fraction rez = Fraction(numerator * fr.numerator, denominator * fr.denominator).normalize();
  return rez;
}

Fraction Fraction::operator/(const Fraction &fr) {
  Fraction rez = Fraction(numerator * fr.denominator, fr.numerator * denominator).normalize();
  return rez;
}

Fraction Fraction::operator=(const Fraction &fr) {
  numerator = fr.numerator;
  denominator = fr.denominator;
  return *this;
}