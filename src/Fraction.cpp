// Copyright 2020 Nikolaev Ivan


#include "Fraction.h"

int getGDC(int a, int b) {
    int result = 0;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            result = i;
            break;
        }
    }
    return result;
}

Fraction::Fraction(const Fraction& fraction) {
    this->denominator = fraction.denominator;
    this->numerator = fraction.numerator;
}

std::string Fraction::getValue() {
    if (this->denominator == 1)
        return "1";
    else
        return std::to_string(this->numerator) +
               "/" + std::to_string(this->denominator);
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction& fraction) {
    Fraction result(numerator * fraction.denominator +
                    denominator * fraction.numerator,
                    denominator * fraction.denominator);
    return result;
}

Fraction Fraction::operator-(const Fraction& fraction) {
    Fraction result(numerator * fraction.denominator -
                    denominator * fraction.numerator,
                    denominator * fraction.denominator);
    return result;
}

Fraction Fraction::operator*(const Fraction& fraction) {
    Fraction result(numerator * fraction.numerator,
                    denominator * fraction.denominator);
    return result;
}

Fraction Fraction::operator/(const Fraction& fraction) {
    Fraction result(numerator * fraction.denominator,
                    denominator * fraction.numerator);
    return result;
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
