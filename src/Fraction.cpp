// Copyright 2020 Dumarevskaya
#include "Fraction.h"

std::string Fraction::getValue() {
  std::string str;
  if (denominator == 0) {
      str = "Error: impossible operation";
  } else {
     *this = this->normalize();
     if (denominator == 1) {
       str = std::to_string(numerator);
     } else {
       str = std::to_string(numerator) + "/" + std::to_string(denominator);
     }
  }
  return str;
}

int Fraction::getNumerator() {
  *this = this->normalize();
  return numerator;
}

int Fraction::getDenominator() {
  *this = this->normalize();
  return denominator;
}

Fraction Fraction::operator+(const Fraction& fr) {
  if (denominator == fr.denominator) {
    Fraction new_f(numerator + fr.numerator, denominator);
    return new_f;
  } else {
     Fraction new_f;
     new_f.numerator = numerator * fr.denominator + denominator * fr.numerator;
     new_f.denominator = denominator * fr.denominator;
     return new_f;
  }
}

Fraction Fraction::operator-(const Fraction& fr) {
  if (denominator == fr.denominator) {
    Fraction new_f(numerator - fr.numerator, denominator);
    return new_f;
  } else {
     Fraction new_f;
     new_f.numerator = numerator * fr.denominator - denominator * fr.numerator;
     new_f.denominator = denominator * fr.denominator;
     return new_f;
  }
}

Fraction Fraction::operator*(const Fraction& frac) {
  return Fraction(numerator * frac.numerator, denominator * frac.denominator);
}

Fraction Fraction::operator/(const Fraction& fr) {
  try {
    if (fr.numerator == 0)
      throw 0;
    return Fraction(numerator * fr.denominator, denominator * fr.numerator);
  }
  catch (int) {
    denominator = 0;
  }
  return *this;
}

Fraction& Fraction::operator=(const Fraction& frac) {
  if (this == &frac) {
    return *this;
  }
  numerator = frac.numerator;
  denominator = frac.denominator;
  return *this;
}

Fraction Fraction::normalize() {
  int min = numerator, max = denominator;
  if (min == 0) {
    denominator = 1;
    return *this;
  }
  while (max % min != 0) {
    int temp = min;
    min = max % min;
    max = temp;
  }
  numerator = numerator / min;
  denominator = denominator / min;
  return *this;
}
