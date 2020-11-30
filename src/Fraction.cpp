// Copyright 2020 valvarl

#include "Fraction.h"

void Fraction::normalize() {
    if (numerator == 0) {
        denominator = 1;
    } else {
        int m, n, i;
        while (true) {
            m = std::min(abs(numerator), abs(denominator));
            n = numerator;
            for (i = 2; i <= m; i++) {
                if (numerator % i == 0 && denominator % i == 0) {
                    numerator /= i;
                    denominator /= i;
                    break;
                }
            }
            if (n == numerator) {
                break;
            }
        }
        if (numerator * denominator < 0) {
            numerator = -abs(numerator);
            denominator = abs(denominator);
        } else {
            numerator = abs(numerator);
            denominator = abs(denominator);
        }
    }
}

std::string Fraction::getValue() {
    std::string row;
    if (numerator * denominator < 0) {
        row = "-";
    }
    if (abs(denominator) != 1) {
        row += std::to_string(numerator) + "/" + std::to_string(denominator);
    } else {
        row += std::to_string(numerator);
    }
    return row;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction &f) {
    int new_numerator = numerator * f.denominator + f.numerator * denominator;
    Fraction new_fraction{new_numerator, abs(denominator * f.denominator)};
    new_fraction.normalize();
    return new_fraction;
}

Fraction Fraction::operator-(const Fraction &f) {
    int new_numerator = numerator * f.denominator - f.numerator * denominator;
    Fraction new_fraction{new_numerator, abs(denominator * f.denominator)};
    new_fraction.normalize();
    return new_fraction;
}

Fraction Fraction::operator*(const Fraction &f) {
    Fraction new_fraction{numerator * f.numerator, denominator * f.denominator};
    new_fraction.normalize();
    return new_fraction;
}

Fraction Fraction::operator/(const Fraction &f) {
    Fraction new_fraction{numerator * f.denominator, denominator * f.numerator};
    new_fraction.normalize();
    return new_fraction;
}

Fraction& Fraction::operator=(const Fraction& f) {
    numerator = f.numerator;
    denominator = f.denominator;
    return *this;
}
