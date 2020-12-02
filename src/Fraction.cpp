// Copyright 2020 Nikolaev Ivan
#include "Fraction.h"
int getGDC(int a, int b) {
    int result = 1;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            result = i;
            break;
        }
    }
    return result;
}
void Fraction::normalize() {
    int gdc = getGDC(this->denominator, this->numerator);
    this->numerator = this->numerator / gdc;
    this->denominator = this->denominator / gdc;
}
std::string Fraction::getValue() {
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}
int Fraction::getNumerator() {
    return this->numerator;
}
int Fraction::getDenominator() {
    return this->denominator;
}
Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    if (denominator == 0) {
        throw "Exception: divide by zero";
    }
    normalize();
}
Fraction::Fraction(const Fraction& fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
}
Fraction Fraction::operator+(const Fraction& fraction) {
    Fraction resultFraction(
        this->numerator * fraction.denominator
        + fraction.numerator * this->denominator,
        this->denominator * fraction.denominator);
    return resultFraction;
}
Fraction Fraction::operator-(const Fraction& fraction) {
    Fraction resultFraction(
        this->numerator * fraction.denominator
        - fraction.numerator * this->denominator,
        this->denominator * fraction.denominator);
    return resultFraction;
}
Fraction Fraction::operator*(const Fraction& fraction) {
    Fraction resultFraction(
        this->numerator * fraction.numerator,
        this->denominator * fraction.denominator);
    return resultFraction;
}
Fraction Fraction::operator/(const Fraction& fraction) {
    Fraction resultFraction(
        this->numerator * fraction.denominator,
        this->denominator * fraction.numerator);
    return resultFraction;
}
Fraction Fraction::operator=(const Fraction& fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    return *this;
}
