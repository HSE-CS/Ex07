// Copyright 2020 Igor Tyulin
#include "Fraction.h"

Fraction::Fraction(int num, int denom) {
    if (num == 0) {
        numerator = num;
        denominator = 1;
    }
    if ((num != 0) && (denom != 0)) {
        numerator = num;
        denominator = denom;
    }
    this->normalize();
}

Fraction::Fraction(const Fraction& fr) {
    numerator = fr.numerator;
    denominator = fr.denominator;
}

void Fraction::normalize() {
    int min = 0;
    if (abs(numerator) < abs(denominator)) {
        min = abs(numerator);
    }
    if ((abs(numerator) > abs(denominator)) || (abs(numerator) == abs(denominator))) {
        min = abs(denominator);
    }
    int gcd = 1;
    for (int i = 1; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > gcd)) {
            gcd = i;
        }
    }
    numerator /= gcd;
    denominator /= gcd;
}

std::string Fraction::getValue() {
    std::string str;
    str += std::to_string(numerator);
    str += '/';
    str += std::to_string(denominator);
    return str;
}

int Fraction::getNumerator() {
    return numerator;
}
int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& fr) {
    return Fraction(numerator * fr.denominator +
                    fr.numerator * denominator, denominator * fr.denominator);
}

Fraction Fraction::operator-(const Fraction& fr) {
    return Fraction(numerator * fr.denominator -
                    fr.numerator * denominator, denominator * fr.denominator);
}

Fraction Fraction::operator*(const Fraction& fr) {
    return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}
Fraction Fraction::operator/(const Fraction& fr) {
    return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}

Fraction Fraction::operator=(const Fraction& fr) {
    numerator = fr.numerator;
    denominator = fr.denominator;
    return *this;

}
