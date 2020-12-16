// Copyright 2020 Mushka Nikita

#include "Fraction.h"
#include <iostream>

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int a, int b) {
    numerator = a;
    denominator = b;
    if (denominator == 0) throw;
}

Fraction::Fraction(const Fraction &fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    if (denominator == 0) throw;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

std::string Fraction::getValue() {
    std::string num = std::to_string(numerator);
    if (denominator != 1) {
        std::string denom = std::to_string(denominator);
        return num + "/" + denom;
    }
    else if (denominator == 1) return num;
}

void Fraction::normalize() {
    if (denominator == 0) throw;
    if (numerator == 0) { denominator = 1; return; }
    if (numerator == 1 || denominator == 1) return;

    int min;
    if (abs(numerator) <= abs(denominator)) min = numerator;
    else                                    min = denominator;

    int lcd = 1;
    for (int i = 1; i <= min; i++) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > lcd))
            lcd = i;
    }
    numerator /= lcd;
    denominator /= lcd;
}

Fraction Fraction::operator + (const Fraction& fraction) {
    int num = fraction.denominator
            * numerator + fraction.numerator * denominator;
    int denom = denominator * fraction.denominator;

    if (num == 0) denom = 1;
    Fraction answ(num, denom);
    answ.normalize();
    return answ;
}

Fraction Fraction::operator - (const Fraction& fraction) {
    int num = fraction.denominator *
            numerator - fraction.numerator * denominator;
    int denom = denominator * fraction.denominator;
    if (num == 0) {
        denom = 1;
    }
    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator * (const Fraction& fraction) {
    int num = fraction.numerator * numerator;
    int denom = denominator * fraction.denominator;

    if (num == 0) denom = 1;
    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator / (const Fraction& fraction) {
    int num = numerator * fraction.denominator;
    int denom = denominator * fraction.numerator;

    if (num == 0) denom = 1;
    Fraction res(num, denom);
    res.normalize();
    return res;
}

Fraction Fraction::operator = (const Fraction& fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    normalize();
    return *this;
}
