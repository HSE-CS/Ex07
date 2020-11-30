// Copyright 2020 sccc
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include "Fraction.h"

void Fraction::normalize() {
    int a = abs(numerator);
    int b = abs(denominator);
    while (a != 0 && b != 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    numerator /= a + b;
    denominator /= a + b;
}

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}

Fraction::Fraction(int _numerator, unsigned int _denumerator) {
    numerator = _numerator;
    denominator = _denumerator;
    normalize();
}

Fraction::Fraction(const Fraction& fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
}

std::string Fraction::getValue() {
    std::stringstream stream;
    stream << numerator << "/" << denominator;
    return stream.str();
}

int Fraction::getNumerator() const {
    return numerator;
}

unsigned int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::operator+ (const Fraction& fc) {
    int newDen = fc.getDenominator() * denominator;
    int a = fc.getNumerator() * denominator;
    int b = numerator * fc.getDenominator();
    int newEnum = a + b;
    return Fraction(newEnum, newDen);
}

Fraction Fraction::operator- (const Fraction& fc) {
    int newDen = fc.getDenominator() * denominator;
    int a = -fc.getNumerator() * denominator;
    int b = numerator * fc.getDenominator();
    int newEnum = a + b;
    return Fraction(newEnum, newDen);
}

Fraction Fraction::operator* (const Fraction& fc) {
    int newDen = fc.getDenominator() * denominator;
    int newEn = fc.getNumerator() * numerator;
    return Fraction(newEn, newDen);
}

Fraction Fraction::operator/ (const Fraction& fc) {
    if (fc.getNumerator() == 0)
        throw "Divine by  0";
    int newDen = denominator * fc.getNumerator();
    int newEn = numerator * fc.getDenominator();
    return Fraction(newEn, newDen);
}
