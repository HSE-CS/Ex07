// Copyright 2020 Konina Tatiana
#include "Fraction.h"
#include <string>

int nod(int x, int y) {
  while (x != y && x != 0 && y != 0) {
    if (x > y)
      x = x - y;
    else
      y = y - x;
  }
  return y;
}

Fraction Fraction::normalize() {
  int nod_res = nod(this->numerator, this->denominator);
  this->numerator /= nod_res;
  this->denominator /= nod_res;
  return *this;
}

int Fraction::getDenominator() const {
  return this->denominator;
}


int Fraction::getNumerator() const {
  return this->numerator;
}

std::string Fraction::getValue() {
  Fraction obj = normalize();
  std::string res = std::to_string(obj.numerator) +
	  "\\" + std::to_string(obj.denominator);
  return res;
}

Fraction Fraction::operator+(const Fraction& obj) {
  int num = this->numerator * obj.denominator +
	  this->denominator * obj.numerator;
  int denom = this->denominator * obj.denominator;
  return Fraction(num, denom).normalize();
}

Fraction Fraction::operator-(const Fraction& obj) {
  int num = this->numerator * obj.denominator -
	  this->denominator * obj.numerator;
  int denom = this->denominator * obj.denominator;
  return Fraction(num, denom).normalize();
}

Fraction Fraction::operator*(const Fraction& obj) {
  int num = this->numerator * obj.numerator;
  int denom = this->denominator * obj.denominator;
  return Fraction(num, denom).normalize();
}

Fraction Fraction::operator/(const Fraction& obj) {
  int num = this->numerator * obj.denominator;
  int denom = this->denominator * obj.numerator;
  return Fraction(num, denom).normalize();
}

Fraction Fraction::operator=(const Fraction& obj) {
  this->numerator = obj.numerator;
  this->denominator =  obj.denominator;
  return *this;
}

