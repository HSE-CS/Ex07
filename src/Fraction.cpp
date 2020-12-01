// Copyright 2020 jswark
#include "Fraction.h"

int Fraction::getNumerator() { return this->numerator; }
int Fraction::getDenominator() { return this->denominator; }
std::string Fraction::getValue() {
  normalize();
  if (this->denominator == 1)
    return std::to_string(this->numerator);
  else
    return (std::to_string(this->numerator) + "/" +
            std::to_string(this->denominator));
}
void Fraction::normalize() {
  int divisor = NOD(abs(this->denominator), abs(this->numerator));
  this->numerator /= divisor;
  this->denominator /= divisor;
}
Fraction Fraction::operator+(const Fraction &fr) {
  int new_num =
      this->numerator * fr.denominator + fr.numerator * this->denominator;
  int new_den = this->denominator * fr.denominator;
  return Fraction(new_num, new_den);
}
Fraction Fraction::operator-(const Fraction &fr) {
  int new_num =
      this->numerator * fr.denominator - fr.numerator * this->denominator;
  int new_den = this->denominator * fr.denominator;
  return Fraction(new_num, new_den);
}
Fraction Fraction::operator*(const Fraction &fr) {
  int new_num = this->numerator * fr.numerator;
  int new_den = this->denominator * fr.denominator;
  return Fraction(new_num, new_den);
}
Fraction Fraction::operator/(const Fraction &fr) {
  int new_num = this->numerator * fr.denominator;
  int new_den = this->denominator * fr.numerator;
  return Fraction(new_num, new_den);
}
Fraction &Fraction::operator=(const Fraction &fr) {
  this->numerator = fr.numerator;
  this->denominator = fr.denominator;
  return *this;
}
int NOD(int M, int L) {
  while (L != M && L != 0 && M != 0) {
    if (L > M)
      L = L - M;
    else
      M = M - L;
  }
  return M;
}
