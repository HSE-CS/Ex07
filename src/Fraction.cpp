// Copyright 2020 DBarinov
#include "Fraction.h"

#include <cstring>
#include <cmath>

Fraction::Fraction(int n, int d) {
    num = n;
    denum = d;
}

Fraction::Fraction(const Fraction& c) {
    num = c.num;
    denum = c.denum;
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
    int t = gcd(num, denum);
    num = num/t;
    denum = denum/t;
}

std::string Fraction::getValue() const {
    std::string n, d, ret;
    n = std::to_string(num);
    d = std::to_string(denum);
    ret = n+"/"+d;
    return ret;
}

int Fraction::getNum() const {
    return num;
}

int Fraction::getDenum() const {
    return denum;
}

Fraction& Fraction::operator=(const Fraction& c) {
    num = c.num;
    denum = c.denum;
    return *this;
}

Fraction Fraction::operator*(const Fraction& c) {
    int n, m;
    n = num*c.num;
    m = denum*c.denum;
    Fraction a(n, m);
    a.normalize();
    return a;
}

Fraction Fraction::operator/(const Fraction& c) {
    int n, m;
    n = num*c.denum;
    m = denum*c.num;
    Fraction a(n, m);
    a.normalize();
    return a;
}

Fraction Fraction::operator+(const Fraction& c) {
    int t, a, b;
    t = denum * c.denum/ gcd(denum, c.denum);
    a = num * (t / denum);
    b = c.num * (t / c.denum;
    Fraction x(a+b, t);
    x.normalize();
    return x;
}

Fraction Fraction::operator-(const Fraction& c) {
    int t, a, b;
    t = denum*c.denum/gcd(denum, c.denum);
    a = num*(t/denum);
    b = c.num*(t/c.denum);
    Fraction x(a-b, t);
    x.normalize();
    return x;
}