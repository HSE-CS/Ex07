//Copyright 2020 mkhorosh
#include "Fraction.h"
#include <string>

int nod(int ch, int z) {
  ch = abs(ch);
  z = abs(z);
  if (z == 0)
    return ch;
  else
    return nod(z, ch % z);
}

Fraction Fraction::normalize() {
  int nodd = nod(numerator, denominator);
  Fraction ans(numerator, denominator);
  ans.numerator = ans.numerator % nodd;
  ans.denominator = ans.denominator % nodd;
  return ans;
}

std::string Fraction::getValue() {
  Fraction ans(numerator, denominator);
  ans.normalize();
  if (ans.denominator != 1) {
    return std::to_string(ans.numerator) + '/' + std::to_string(ans.denominator);
  } else {
    return std::to_string(ans.numerator);
  }
}

int Fraction::getNumerator() const {
  return numerator;
}

int Fraction::getDenominator() const {
  return denominator;
}

Fraction Fraction::operator+(Fraction &num) {
  Fraction ans(numerator * num.getDenominator() + num.getNumerator() * denominator, denominator * num.getDenominator());
  return ans.normalize();
}

Fraction Fraction::operator-(Fraction &num) {
  Fraction ans(numerator * num.getDenominator() - num.getNumerator() * denominator, denominator * num.getDenominator());
  return ans.normalize();
}

Fraction Fraction::operator*(Fraction &num) {
  Fraction ans(numerator * num.getNumerator(), denominator * num.getDenominator());
  return ans.normalize();
}

Fraction Fraction::operator/(Fraction &num) {
  Fraction ans(numerator * num.getDenominator(), denominator * num.getNumerator());
  return ans.normalize();
}

Fraction Fraction::operator=(Fraction &num) {
  Fraction ans(num);
  return ans.normalize();
}
