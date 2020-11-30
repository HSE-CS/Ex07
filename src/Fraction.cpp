// Copyright 2020 Nikita Kasyanov

#include <string>
#include "../include/Fraction.h"

void Fraction::normalize() {
    int gcd = std::gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

Fraction::Fraction(int num, int den) {
    if (den == 0) {
        throw "Div by zero";
    } else {
        numerator = num;
        denominator = den;
    }
    this->normalize();
}

Fraction::Fraction(const Fraction &frac) {
    numerator = frac.numerator;
    denominator = frac.denominator;
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

Fraction Fraction::operator+(const Fraction &frac) {
    return Fraction(frac.denominator * numerator +
                    denominator * frac.numerator,
                    denominator * frac.denominator);
}

Fraction Fraction::operator-(const Fraction &frac) {
    return Fraction(frac.denominator * numerator -
                    denominator * frac.numerator,
                    denominator * frac.denominator);
}

Fraction Fraction::operator*(const Fraction &frac) {
    return Fraction(numerator * frac.numerator, denominator * frac.denominator);
}
Fraction Fraction::operator/(const Fraction &frac) {
    return Fraction(numerator * frac.denominator, denominator * frac.numerator);
}
Fraction & Fraction::operator=(const Fraction &frac) {
    numerator = frac.numerator;
    denominator = frac.denominator;
    return *this;
}
