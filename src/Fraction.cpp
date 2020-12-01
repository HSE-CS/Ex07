// Copyright 2020 Nikolaev Ivan
#include "Fraction.h"

int getGDC(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

Fraction::Fraction(int numerator, int denominator) {
    this->denominator = denominator;
    if (this->denominator == 0) {
        throw "Divide by 0";
    }
    this->numerator = numerator;
    normalize();
}

Fraction::Fraction(const Fraction& fraction) {
    this->denominator = fraction.denominator;
    this->numerator = fraction.numerator;
}

std::string Fraction::getValue() {
    if (this->denominator == 1)
        return "1";
    else
        return std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction& fraction) {
    return Fraction(numerator * fraction.denominator + denominator * fraction.numerator, denominator * fraction.denominator);
}

Fraction Fraction::operator-(const Fraction& fraction) {
    return Fraction(numerator * fraction.denominator - denominator * fraction.numerator, denominator * fraction.denominator);
}

Fraction Fraction::operator*(const Fraction& fraction) {
    return Fraction(numerator * fraction.numerator, denominator * fraction.denominator);
}

Fraction Fraction::operator/(const Fraction& fraction) {
    return Fraction(numerator * fraction.denominator, denominator * fraction.numerator);
}

Fraction Fraction::operator=(const Fraction& fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    return *this;
}

void Fraction::normalize() {
    int gdc = getGDC(abs(this->numerator), abs(this->denominator));
    this->numerator = this->numerator / gdc;
    this->denominator = this->denominator / gdc;
}