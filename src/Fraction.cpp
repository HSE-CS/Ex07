// Copyright 2020 Ex07 TiNa
#include "Fraction.h"
#include <iostream>
#include <string>

Fraction::Fraction(int num, int den) {
     numerator = num;
     denominator = den;
     normalize();
}

Fraction::Fraction(const Fraction& inform) {
     numerator = inform.numerator;
     denominator = inform.denominator;
}

void Fraction::normalize() {
     int num = numerator;
     int den = denominator;
     while ((num != 0) && (den != 0)) {
         if (num >= den)
             num %= den;
         else
             den %= num;
     }
     int d = num + den;
     numerator /= d;
     denominator /= d;
}

std::string Fraction::getValue() {
     std::string frac = "";
     frac = std::to_string(numerator) + "/" + std::to_string(denominator);
     return frac;
}

int Fraction::getNumerator() {
     return numerator;
}

int Fraction::getDenominator() {
     return denominator;
}

Fraction Fraction::operator+(const Fraction& op) {
     int num = 0;
     int den = 0;
     num = numerator * op.denominator + op.numerator * denominator;
     den = denominator * op.denominator;
     return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& op) {
     int num = 0;
     int den = 0;
     num = numerator * op.denominator - op.numerator * denominator;
     den = denominator * op.denominator;
     return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& op) {
     int num = 0;
     int den = 0;
     num = numerator * op.numerator;
     den = denominator * op.denominator;
     return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& op) {
     int num = 0;
     int den = 0;
     num = numerator * op.denominator;
     den = denominator * op.numerator;
     return Fraction(num, den);
}
