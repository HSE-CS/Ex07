// Copyright 2020 Bekusov Mikhail

#include "Fraction.h"

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    return (a == 0) ? b : gcd(b % a, a);
}

void Fraction::normalize() {
    int tmp = gcd(denominator, numerator);
    denominator = denominator / tmp;
    numerator = numerator / tmp;
}

Fraction::Fraction(int n, int d) {
    denominator = d;
    if (denominator == 0) {
        throw "Divide by 0";
    }
    numerator = n;
    normalize();
}

Fraction::Fraction(const Fraction &a) {
    numerator = a.numerator;
    denominator = a.denominator;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction &Fraction::operator=(const Fraction &dop) {
    numerator = dop.numerator;
    denominator = dop.denominator;
    return *this;
}

Fraction Fraction::operator/(const Fraction &dop) {
    Fraction nw(numerator * dop.denominator, denominator * dop.numerator);
    return nw;
}

Fraction Fraction::operator+(const Fraction &dop) {
    Fraction nw(numerator * dop.denominator+ dop.numerator * denominator,
            denominator * dop.denominator);
    return nw;
}

Fraction Fraction::operator*(const Fraction &dop) {
    Fraction nw(numerator * dop.numerator,
            denominator * dop.denominator);
    return nw;
}

Fraction Fraction::operator-(const Fraction &dop) {
    Fraction nw(numerator * dop.denominator - dop.numerator * denominator,
            denominator * dop.denominator);
    return nw;
}

std::string Fraction::getValue() {
    std::string n, d;
    if (denominator == 1) {
        n = std::to_string(numerator);
        return n;
    } else {
        n = std::to_string(numerator);
        d = std::to_string(denominator);
        return n + "/" + d;
    }
}
