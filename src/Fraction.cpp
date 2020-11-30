// Copyright 2020 BD
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
Fraction::Fraction(int new_numerator,  int new_denumerator) {
    numerator = new_numerator;
    denominator = new_denumerator;
    normalize();
}

Fraction::Fraction(const Fraction& fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
}
std::string Fraction::getValue() {
    std::string str;
    str += std::to_string(numerator);
    str += '/';
    str += std::to_string(denominator);
    return str;
}

int Fraction::getNumerator() const{
    return numerator;
}

int Fraction::getDenominator() const{
    return denominator;
}

Fraction Fraction::operator+(const Fraction& fc) {
    return Fraction(numerator * fc.denominator +
        fc.numerator * denominator, denominator * fc.denominator);
}

Fraction Fraction::operator-(const Fraction& fc) {
    return Fraction(numerator * fc.denominator -
        fc.numerator * denominator, denominator * fc.denominator);
}

Fraction Fraction::operator*(const Fraction& fc) {
    return Fraction(numerator * fc.numerator, denominator * fc.denominator);
}

Fraction Fraction::operator/(const Fraction& fc) {
    return Fraction(numerator * fc.denominator, denominator * fc.numerator);
}

Fraction Fraction::operator=(const Fraction& fc) {
    numerator = fc.numerator;
    denominator = fc.denominator;
    return *this;
}
