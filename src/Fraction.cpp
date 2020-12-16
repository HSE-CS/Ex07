// Copyright 2020 Grachev Alexander

#include "../include/Fraction.h"

#include <string>

using namespace std;

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int num, int denom) {
    numerator = num;
    denominator = denom;
    if (denominator == 0) throw;

}

Fraction::Fraction(const Fraction &frac) {
    numerator = frac.numerator;
    denominator = frac.denominator;
}

string Fraction::GetValue() {
    string s;
    s += to_string(numerator);
    s += '/';
    s += to_string(denominator);
    return s;
}

int Fraction::getNumerator() { return numerator; }

int Fraction::getDenominator() { return denominator; }

void Fraction::normalize() {
    int min = 0;
    int nod = 1;

    if (abs(numerator) < abs(denominator)) {
        min = abs(numerator);
    }

    if ((abs(numerator) >= abs(denominator))) {
        min = abs(denominator);
    }

    for (int i = 1; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > nod)) {
            nod = i;
        }
    }
    numerator /= nod;
    denominator /= nod;
}

Fraction Fraction::operator+(const Fraction& frac) {
    int num = frac.denominator * numerator + frac.numerator * denominator;
    int denom = denominator * frac.denominator;

    if (num == 0) denom = 1;

    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator-(const Fraction& frac) {
    int num = numerator * frac.denominator - frac.numerator * denominator;
    int denom = denominator * frac.denominator;

    if (num == 0) denom = 1;

    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator*(const Fraction& frac) {
    int num = numerator * frac.numerator;
    int denom = denominator * frac.denominator;

    if (num == 0) denom = 1;

    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator/(const Fraction& frac) {
    int num = numerator * frac.denominator;
    int denom = denominator * frac.numerator;

    if (num == 0) denom = 1;

    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator=(const Fraction& frac) {
    numerator = frac.numerator;
    denominator = frac.denominator;
    return *this;
}

