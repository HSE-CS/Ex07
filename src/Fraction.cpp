// Copyright 2020 Stolbov Yaroslav
#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int a, int b) {
    numerator = a;
    denominator = b;
    if (denominator == 0) throw;
}

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(const Fraction &f) {
    numerator = f.numerator;
    denominator = f.denominator;
    if (denominator == 0) throw;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

std::string Fraction::getValue() {
    if (denominator != 1) return std::to_string(numerator) +
    "/" + std::to_string(denominator);
    else if (denominator == 1) return std::to_string(numerator);
}

void Fraction::normalize() {
    if (denominator == 0) throw;
    if (numerator == 0) {
        denominator = 1;
        return;
    }
    if (numerator == 1 || denominator == 1) return;
    int min;
    if (abs(numerator) <= abs(denominator)) {
        min = numerator;
    } else {
        min = denominator;
    }
    int nod = 1;
    for (int i = 1; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > nod)) {
            nod = i;
        }
    }
    numerator /= nod;
    denominator /= nod;
}

Fraction Fraction::operator + (const Fraction& num) {
    int n = num.denominator * numerator + num.numerator * denominator;
    int d = denominator * num.denominator;
    if (n == 0) {
        d = 1;
    }
    Fraction res(n, d);
    res.normalize();
    return res;
}

Fraction Fraction::operator - (const Fraction& num) {
    int n = num.denominator * numerator - num.numerator * denominator;
    int d = denominator * num.denominator;
    if (n == 0) {
        d = 1;
    }
    Fraction res(n, d);
    res.normalize();
    return res;
}

Fraction Fraction::operator * (const Fraction& num) {
    int n = num.numerator * numerator;
    int d = denominator * num.denominator;
    if (n == 0) {
        d = 1;
    }
    Fraction res(n, d);
    res.normalize();
    return res;
}

Fraction Fraction::operator / (const Fraction& num) {
    int n = numerator * num.denominator;
    int d = denominator * num.numerator;
    if (n == 0) {
        d = 1;
    }
    Fraction res(n, d);
    res.normalize();
    return res;
}

Fraction Fraction::operator = (const Fraction& num) {
    numerator = num.numerator;
    denominator = num.denominator;
    normalize();
    return *this;
}
