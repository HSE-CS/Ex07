// Copyright 2020 Tatsenko Alexey
#include"Fraction.h"
#include<cstring>
#include<cmath>

int nod_func(int x, int y) {
    if (x == 0 || y == 0) return 0;
    if (x < 0) x *= -1;
    if (y < 0) y *= -1;

    if (x == y)
    return x;

    int d;
    int r = abs(x - y);

    if (x < y) {
      d = nod_func(x, r);
    } else {
      d = nod_func(y, r);
      }
    return d;
}

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(const Fraction &x) {
    this->numerator = x.numerator;
    this->denominator = x.denominator;
}

Fraction::Fraction(int a, int b) {
  if ( a != 0 && b == 0 )
    throw "Error";
  else {
   numerator = a;
   denominator = b;
  }
}

void Fraction::normalize() {
    int NOD = nod_func(this->numerator, this->denominator);

  if ( NOD == 0 ) {
   this->numerator = 0;
   this->denominator = 1;
  } else {
     this->numerator = this->numerator / NOD;
     this->denominator = this->denominator / NOD;
    }
}

std::string Fraction::getValue() {
    std::string s;
    if (numerator >= 0 && denominator >= 0 || numerator <= 0 && denominator <= 0) {
        s = std::to_string(numerator);
        s += "/" ;
        s += std::to_string(denominator);
    } else {
        s += "-";
        s = std::to_string(numerator);
        s += "/";
        s += std::to_string(denominator);
      }

    return s;
}

int Fraction:: getNumerator() {
    return this->numerator;
}

int Fraction:: getDenominator() {
    return this->denominator;
}

Fraction Fraction::operator+(Fraction y) {
    Fraction s;
    int x_n = this->numerator;
    int x_d = this->denominator;

    int y_n = y.numerator;
    int y_d = y.denominator;

    if (x_d == y_d) {
        s.numerator = x_n + y_n;
        s.denominator = x_d;
    }
    else
    {
        s.denominator = x_d * y_d;
        s.numerator = x_n * y_d + y_n * x_d;
    }

    s.normalize();

    return s;
}

Fraction Fraction::operator-(Fraction y) {
        Fraction r;
        int x_n = this->numerator;
        int x_d = this->denominator;

        int y_n = y.numerator;
        int y_d = y.denominator;

        if (x_d = y_d) {
        r.denominator = x_d;
        r.numerator = x_n - y_n;
        }
        else {
        r.denominator = x_d * y_d;
        r.numerator = x_n * y_d - y_n * x_d;
        }

        r.normalize();

        return r;
}

Fraction Fraction::operator*(Fraction y) {
    Fraction q;
    int x_n = this->numerator;
    int x_d = this->denominator;

    int y_n = y.numerator;
    int y_d = y.denominator;

    q.numerator = x_n * y_n;
    q.denominator = x_d * y_d;

    q.normalize();

    return q;
}

Fraction Fraction :: operator/(Fraction y) {
    Fraction d;

    int x_n = this->numerator;
    int x_d = this->denominator;

    int y_n = y.numerator;
    int y_d = y.denominator;

    d.numerator = x_n * y_d;
    d.denominator = x_d * y_n;

    d.normalize();

    return d;
}

Fraction& Fraction::operator=(Fraction y) {
    int* x_n = &this->numerator;
    int* x_d = &this->denominator;

    *x_n = y.numerator;
    *x_d = y.denominator;

    return *this;
}