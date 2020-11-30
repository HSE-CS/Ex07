// Copyright 2020 Egor Buzanov
#include "../include/Fraction.h"

void Fraction::normalize() {
  if (numerator < 0 && denominator < 0) {
    numerator = -numerator;
    denominator = denominator;
  }

  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
};

explicit Fraction::Fraction(int num = 0, int den = 1) {
  if (den != 0) {
    numerator = num;
    denominator = den;
    this->normalize();
  } else {
    throw "Division by 0";
  }
};

Fraction::Fraction(const Fraction &copied_frac) {
  numerator = copied_frac.numerator;
  denominator = copied_frac.denominator;
};

std::string Fraction::getValue() {
  std::string result;
  if (numerator < 0 || denominator < 0) {
    result += '-';
  }

  result += std::to_string(abs(numerator));

  if (denominator != -1 && denominator != 1) {
    result += '/' + std::to_string(abs(denominator));
  }

  return result;
};

int Fraction::getNumerator() { return numerator; };

int Fraction::getDenominator() { return denominator; };

Fraction Fraction::operator+(const Fraction &frac) {
  return Fraction(numerator * frac.denominator + frac.numerator * denominator,
                  denominator * frac.denominator);
};

Fraction Fraction::operator-(const Fraction &frac) {
  return Fraction(numerator * frac.denominator - frac.numerator * denominator,
                  denominator * frac.denominator);
};

Fraction Fraction::operator*(const Fraction &frac) {
  return Fraction(numerator * frac.numerator, denominator * frac.denominator);
};

Fraction Fraction::operator/(const Fraction &frac) {
  return Fraction(numerator * frac.denominator, denominator * frac.numerator);
};

Fraction Fraction::operator=(const Fraction &frac) {
  numerator = frac.numerator;
  denominator = frac.denominator;
};