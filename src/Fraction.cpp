#include <string>
#include <iostream>
#include "Fraction.h"

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}

Fraction::Fraction(int a, int b) {
  numerator = a;
  denominator = b;
}

Fraction::Fraction(Fraction &a) {
  numerator = a.numerator;
  denominator = a.denominator;
}

void Fraction::normalize() {
  int a = numerator;
  int b = denominator;
  int c = 0;
  while(b){
    c = a % b;
    a = b;
    b = c;
  }
  numerator = numerator / abs(a);
  denominator = denominator / abs(a);
}

std::string Fraction::getValue()
{
  std::string ans =  "";
  ans = std::to_string(numerator) + "/" + std::to_string(denominator);
  return ans;
}

int Fraction::getNumerator() {
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

Fraction Fraction::operator+(const Fraction& b) {
  int num, den;
  num = numerator * b.getDenominator() + b.getNumerator() * denominator;
  den = denominator * b.getDenominator();
  return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& b) {
  int num, den;
  num = numerator * b.getDenominator() - b.getNumerator() * denominator;
  den = denominator * b.getDenominator();
  return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& b) {
  int num, den;
  num = numerator * b.getNumerator();
  den = denominator * b.getDenominator();
  return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& b) {
  int num, den;
  num = numerator * b.getDenominator();
  den = denominator * b.getNumerator();
  return Fraction(num, den);
}
