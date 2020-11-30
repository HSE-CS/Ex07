// Copyright 2020 Nikita Stifeev
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    if (denominator == 0)
        throw std::runtime_error("denominator = 0");
    normalize();
}

Fraction::Fraction(const Fraction& fraqtion) {
    numerator = fraqtion.numerator;
    denominator = fraqtion.denominator;
}

Fraction& Fraction::operator=(const Fraction& fraqtion) {
    numerator = fraqtion.numerator;
    denominator = fraqtion.denominator;
    return *this;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

int Fraction::gcd(int number1, int number2) const {
    if (number1 < 0)
        number1 = -number1;
    if (number2 < 0)
        number2 = -number2;
    while (number2 != 0) {
        number1 %= number2;
        int tmp = number1;
        number1 = number2;
        number2 = tmp;
    }
    return number1;
}

void Fraction::normalize() {
    int common = gcd(numerator, denominator);
    numerator /= common;
    denominator /= common;
    if (denominator < 0) {
        denominator *= -1;
        numerator *= -1;
    }
}

Fraction Fraction::operator+(const Fraction& frac) const {
    int num = numerator * frac.denominator + frac.numerator * denominator;
    int den = denominator * frac.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& frac) const {
    int num = numerator * frac.denominator - frac.numerator * denominator;
    int den = denominator * frac.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& frac) const {
    int num = numerator * frac.numerator;
    int den = denominator * frac.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& frac) const {
    int num = numerator * frac.denominator;
    int den = denominator * frac.numerator;
    return Fraction(num, den);
}

std::string Fraction::getValue() const {
    std::string value = std::to_string(numerator);
    if (denominator != 1) {
        value += "/" + std::to_string(denominator);
    }
    return value;
}
