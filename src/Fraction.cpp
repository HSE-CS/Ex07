#include <string>
#include <iostream>
#include "Fraction.h"

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

void Fraction::normalize() {
    int min = 0;
    if (abs(numerator) < abs(denominator)) {
        min = abs(numerator);
    }
    if ((abs(numerator) > abs(denominator)) ||
        (abs(numerator) == abs(denominator))) {
        min = abs(denominator);
    }
    int c = 1;
    for (int i = 1; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > c)) {
            c = i;
        }
    }
    numerator /= c;
    denominator /= c;
}

Fraction::Fraction(int a, int b) {
    if (b == 0) {
        throw "Division by zero";
    }
    if (a == 0) {
        numerator = a;
        denominator = 1;
    }
    if ((a != 0) && (b != 0)) {
        numerator = a;
        denominator = b;
    }
    this->normalize();
}

Fraction::Fraction(const Fraction& a) {
    numerator = a.numerator;
    denominator = a.denominator;
}

std::string Fraction::getValue() {
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& b) {
    return Fraction(numerator * b.getDenominator() +
        b.getNumerator() * denominator, denominator * b.getDenominator());
}

Fraction Fraction::operator-(const Fraction& b) {
    return Fraction(numerator * b.getDenominator() -
        b.getNumerator() * denominator, denominator * b.getDenominator());
}

Fraction Fraction::operator*(const Fraction& b) {
    return Fraction(numerator * b.getNumerator(),
        denominator * b.getDenominator());
}

Fraction Fraction::operator/(const Fraction& b) {
    return Fraction(numerator * b.getDenominator(),
        denominator * b.getNumerator());
}
Fraction Fraction::operator=(const Fraction& b) {
    numerator = b.numerator;
    denominator = b.denominator;
    return *this;
}