// Copyright 2020 Tatsenko Ilya
#include"Fraction.h"
#include<cstring>

int NOD(int n1, int n2) {
  int div;
  if (n1 == 0 || n2 == 0 || n1 == 0 && n2 == 0) return 0;
  if (n1 < 0) n1 *= -1;
  if (n2 < 0) n2 *= -1;
  if (n1 == n2)
  return n1;
  int d = n1 - n2;
  if (d < 0) {
  d = -d;
  div = NOD(n1, d);
  } else {
  div = NOD(n2, d);
  }
  return div;
}

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}

void Fraction::normalize() {
  int nod = NOD(this->numerator, this->denominator);
  if (nod == 0) {
  this->numerator = 0;
  this->denominator = 1;
  } else {
  this->numerator = this->numerator / nod;
  this->denominator = this->denominator / nod;
  }
}

std::string Fraction::getValue() {
  std::string str;
  //  char t = '-';
  //  char* t_k = &t;
  if (numerator < 0 || denominator < 0) {
  str += "-";
  str = std::to_string(numerator);
  str += "/";
  str += std::to_string(denominator);
  } else if ( numerator * denominator >= 0 ) {
  str = std::to_string(numerator);
  str += "/";
  str += std::to_string(denominator);
  }
  return str;
}

int Fraction:: getNumerator() {
  return this->numerator;
}

int Fraction:: getDenominator() {
  return this->denominator;
}

Fraction Fraction::operator+(Fraction x) {
  Fraction sum;
  if (this->denominator == x.denominator) {
  sum.numerator = this->numerator + x.numerator;
  sum.denominator = x.denominator;
  } else {
  sum.denominator = this->denominator * x.denominator;
  sum.numerator = x.denominator*this->numerator + x.numerator*this->denominator;
  }
  sum.normalize();
  return sum;
}

Fraction Fraction::operator-(Fraction x) {
  Fraction v;
  v.denominator = x.denominator * this->denominator;
  v.numerator = x.denominator*this->numerator-this->denominator*x.numerator;
  v.normalize();
  return v;
}

Fraction Fraction::operator*(Fraction x) {
  Fraction t;
  t.numerator = this->numerator * x.numerator;
  t.denominator = this->denominator * x.denominator;
  t.normalize();
  return t;
}

Fraction Fraction :: operator/(Fraction x) {
  Fraction t;
  t.numerator = this->numerator * x.denominator;
  t.denominator = this->denominator * x.numerator;
  t.normalize();
  return t;
}

Fraction Fraction::operator=(Fraction x) {
  this->numerator = x.numerator;
  this->denominator = x.denominator;
  this->normalize();
  return *this;
}
