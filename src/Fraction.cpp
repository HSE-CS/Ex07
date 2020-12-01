//
// Created by jmax on 01.12.2020.
//

#include "Fraction.h"

int Fraction::getGCD() {
    int num = abs(numerator);
    int den = abs(denominator);

    while (num != 0 && den != 0) {
        if (num > den)
            num %= den;
        else
            den %= num;
    }
    if (denominator < 0)
        return -(num + den);
    else
        return num + den;
}

void Fraction::normalize() {
    int GCD = getGCD();
    if (GCD != 0) {
        numerator /= GCD;
        denominator /= GCD;
    }
}

std::string Fraction::getValue() const {
    if (denominator == 1 || numerator == 0)
        return std::to_string(numerator);
    else {
        std::string str;

        str += std::to_string(numerator);
        str += '/';
        str += std::to_string(denominator);

        return str;
    }
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::operator*(const Fraction &f) const {
    return Fraction(numerator * f.numerator, denominator * f.denominator);
}

Fraction Fraction::operator/(const Fraction &f) const {
    return Fraction(numerator * f.denominator, denominator * f.numerator);
}

Fraction Fraction::operator+(const Fraction &f) const {
    return Fraction((numerator * f.denominator) + (denominator * f.numerator), denominator * f.denominator);
}

Fraction Fraction::operator-(const Fraction &f) const {
    return Fraction((numerator * f.denominator) - (denominator * f.numerator), denominator * f.denominator);
}

Fraction& Fraction::operator=(const Fraction &f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    return *this;
}
