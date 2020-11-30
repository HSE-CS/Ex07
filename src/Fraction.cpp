// Copyright 2020 _
#include "Fraction.h"

#include <string>

static int32_t gcd(int32_t a, int32_t b) {
  if (a < b) std::swap(a, b);
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

void Fraction::normalize() {
  int32_t c = gcd(this->denom, this->numer);
  this->denom /= c;
  this->numer /= c;
}

std::string Fraction::getValue() {
  if (this->denom == 1) {
    return std::to_string(this->numer);
  } else {
    return std::to_string(this->numer) + "/" + std::to_string(this->denom);
  }
}

int32_t Fraction::getNumerator() { return this->numer; }

int32_t Fraction::getDenominator() { return this->denom; }

Fraction Fraction::operator+(const Fraction& other) {
  return Fraction(this->numer * other.denom + other.numer * this->denom,
                  this->denom * other.denom);
}

Fraction Fraction::operator-(const Fraction& other) {
  return Fraction(this->numer * other.denom - other.numer * this->denom,
                  this->denom * other.denom);
}
Fraction Fraction::operator*(const Fraction& other) {
  return Fraction(this->numer * other.numer, this->denom * other.denom);
}
Fraction Fraction::operator/(const Fraction& other) {
  return Fraction(this->numer * other.denom, this->denom * other.numer);
}
Fraction& Fraction::operator=(const Fraction& other) {
  this->numer = other.numer;
  this->denom = other.denom;
  return *this;
}
