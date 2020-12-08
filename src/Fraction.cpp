// Copyright 2020 DBarinov
#include "Fraction.h"

#include <cstring>
#include <cmath>

Fraction::Fraction(int n, int d) {
    numerator = n;
    denominator = d;
}

Fraction::Fraction(const Fraction& c) {
    numerator = c.numerator;
    denominator = c.denominator;
}

int gcd(int a, int b) {
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

void Fraction::normalize() {
    int t = gcd(numerator, denominator);
    numerator = numerator/t;
    denominator = denominator/t;
}

std::string Fraction::getValue() const {
    std::string n, d, ret;
    n = std::to_string(numerator);
    d = std::to_string(denominator);
    ret = n+"/"+d;
    return ret;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction& Fraction::operator=(const Fraction& c) {
    numerator = c.numerator;
    denominator = c.denominator;
    return *this;
}

Fraction Fraction::operator*(const Fraction& c) {
    int n, m;
    n = numerator*c.numerator;
    m = denominator*c.denominator;
    Fraction a(n, m);
    a.normalize();
    return a;
}

Fraction Fraction::operator/(const Fraction& c) {
    int n, m;
    n = numerator*c.denominator;
    m = denominator*c.numerator;
    Fraction a(n, m);
    a.normalize();
    return a;
}

Fraction Fraction::operator+(const Fraction& c) {
    int t, a, b;
    t = denominator * c.denominator / gcd(denominator, c.denominator);
    a = numerator * (t / denominator);
    b = c.numerator * (t / c.denominator);
    Fraction x(a+b, t);
    x.normalize();
    return x;
}

Fraction Fraction::operator-(const Fraction& c) {
    int t, a, b;
    t = denominator*c.denominator/gcd(denominator, c.denominator);
    a = numerator*(t/denominator);
    b = c.numerator*(t/c.denominator);
    Fraction x(a-b, t);
    x.normalize();
    return x;
}