// Copyright 2020 <Shaidi19>
#include "Fraction.h"

Fraction::Fraction(int a, int b) {
    numerator = a;
    denominator = b;
    if (denominator == 0) {
        throw;
    }
}

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(const Fraction& f) {
    numerator = f.numerator;
    denominator = f.denominator;
    if (denominator == 0) {
        throw;
    }
}

void Fraction::normalize() {
    int min = 0;

    if (abs(numerator) <= abs(denominator)) {
        min = numerator;
    } else {
        min = denominator;
    }

    int nod = 1;
    for (int i = 0; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > nod)) {
            nod = i;
        }
    }
    numerator = numerator / nod;
    denominator = denominator / nod;
}

std::string Fraction::getValue() {
    if (denominator == 1) {
        return std::to_string(numerator);
    } else {
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& f) {
    int n = f.numerator * denominator + f.denominator * numerator;
    int d = f.denominator * denominator;
    Fraction result(n, d);
    return result;
}

Fraction Fraction::operator-(const Fraction& f) {
    int n = f.denominator * numerator - f.numerator * denominator;
    int d = f.denominator * denominator;
    Fraction result(n, d);
    return result;
}

Fraction Fraction::operator*(const Fraction& f) {
    int n = f.numerator * numerator;
    int d = f.denominator * denominator;
    Fraction result(n, d);
    return result;
}

Fraction Fraction::operator/(const Fraction& f) {
    int n = numerator * f.denominator;
    int d = denominator * f.numerator;
    Fraction result(n, d);
    return result;
}

Fraction& Fraction::operator=(const Fraction& f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    normalize();
    return *this;
}
