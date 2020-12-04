// Copyright 2020 Tatsenko Ilya

#pragma once
#include<iostream>
#include<string>

class Fraction{
 private:
  int numerator, denominator;
  void normalize();

 public:
  Fraction();
  Fraction(const Fraction& x) {
  this->numerator = x.numerator;
  this->denominator = x.denominator;
  }
  explicit Fraction(int a, int b) {
  if (b == 0 && a != 0) {
  throw "Error";
  } else {
  numerator = a;
  denominator = b;
  }
  }
  std::string getValue();
  int getNumerator();
  int  getDenominator();
  Fraction operator+(Fraction x);
  Fraction operator-(Fraction x);
  Fraction operator*(Fraction x);
  Fraction operator/(Fraction x);
  Fraction operator=(Fraction x);
};
