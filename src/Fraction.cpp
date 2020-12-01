// Copyright 2020 AndreyBakurskii
#include "Fraction.h"

int NOD(int num1, int num2) {
  while (num1 != 0 && num2 != 0) {
    if (num1 > num2)
      num1 = num1 % num2;
    else
      num2 = num2 % num1;
  }

  return num1 + num2;
}

void Fraction::normalize() {
  int nod = NOD(abs(numerator), abs(denominator));

  numerator /= nod;
  denominator /= nod;
}

std::string Fraction::getValue() {
  std::string num = std::to_string(numerator);

  if (denominator == 1 || numerator == 0) {
    return num;
  }
  std::string den = std::to_string(denominator);

  return num + "/" + den;
}

int Fraction::getNumerator() { return numerator; }

int Fraction::getDenominator() { return denominator; }

Fraction Fraction::operator+(const Fraction &fr) {
  return Fraction(numerator * fr.denominator + fr.numerator * denominator,
                  denominator * fr.denominator);
}

Fraction Fraction::operator-(const Fraction &fr) {
  return Fraction(numerator * fr.denominator - fr.numerator * denominator,
                  denominator * fr.denominator);
}

Fraction Fraction::operator*(const Fraction &fr) {
  return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}

Fraction Fraction::operator/(const Fraction &fr) {
  return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}

Fraction Fraction::operator=(const Fraction &fr) {
  if (this == &fr) {
    return *this;
  }

  numerator = fr.numerator;
  denominator = fr.denominator;

  normalize();

  return *this;
}
