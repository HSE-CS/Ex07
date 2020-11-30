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
  if(getNumerator() == getDenominator())
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
  std::cout << num << std::endl;
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

// Fraction operator*(const Fraction &frf, const Fraction &frs) {
//   int num = frf.getNumerator() * frs.getNumerator();
//   int den = frf.getDenominator() * frs.getDenominator();
//   return Fraction(num, den);
// }

// Fraction operator/(const Fraction &frf, const Fraction &frs) {
//   int num = frf.getNumerator() * frs.getDenominator();
//   int den = frf.getDenominator() * frs.getNumerator();
//   return Fraction(num, den);
// }
