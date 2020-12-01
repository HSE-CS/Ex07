// Copyright 2020 Egor Trukhin
#include "Fraction.h"

#include <stdexcept>

Fraction::Fraction(int num, int denom) {
  if (denom == 0) {
    throw std::runtime_error("Denominator cannot be zero");
  }
  this->numerator = num;
  this->denominator = denom;
  this->normalize();
}

Fraction::Fraction(const Fraction& other) {
  this->numerator = other.numerator;
  this->denominator = other.denominator;
}

int Fraction::getNumerator() { return this->numerator; }
int Fraction::getDenominator() { return this->denominator; }

int gcd(int a, int b) {
  while (a && b) {
    if (a > b)
      a %= b;
    else
      b %= a;
  }
  return a + b;
}

void Fraction::normalize() {
  int div = gcd(this->numerator, this->denominator);
  this->numerator = this->numerator / div;
  this->denominator = this->denominator / div;
}

std::string Fraction::getValue() {
  std::string value;
  value.append(std::to_string(this->numerator));
  if (this->denominator != 1) {
    value.push_back('/');
    value.append(std::to_string(this->denominator));
  }
  return value;
}

Fraction Fraction::operator+(const Fraction& other) {
  return Fraction(
      this->numerator * other.denominator + other.numerator * this->denominator,
      this->denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) {
  return Fraction(
      this->numerator * other.denominator - other.numerator * this->denominator,
      this->denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) {
  return Fraction(this->numerator * other.numerator,
                  this->denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) {
  return Fraction(this->numerator * other.denominator,
                  this->denominator * other.numerator);
}

Fraction& Fraction::operator=(const Fraction& other) {
  this->numerator = other.numerator;
  this->denominator = other.denominator;
  return *this;
}
