// Copyright 2020 KostinAndrej
//
// Created by andryjkost on 09.12.2020.
//
#include "Fraction.h"

int get_NOD(int first_number, int second_number) {
    while (first_number != 0 && second_number != 0) {
        if (first_number > second_number) {
            first_number %= second_number;
        } else {
            first_number %= first_number;
        }
    }
    return first_number + second_number;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

std::string Fraction::getValue() {
    normalize();
    if (denominator == 1)
        return std::to_string(numerator);
    else
        return std::to_string(numerator) + "/" + std::to_string(denominator);
}

void Fraction::normalize() {
    int NOD = get_NOD(abs(numerator), abs(denominator));
    numerator /= NOD;
    denominator /= NOD;
}

Fraction Fraction::operator+(const Fraction &value_fraction) const {
    return Fraction(numerator * value_fraction.denominator +
                            value_fraction.numerator * denominator,
                    denominator * value_fraction.denominator);
}

Fraction Fraction::operator-(const Fraction &value_fraction) const {
    return Fraction(numerator * value_fraction.denominator
                    - value_fraction.numerator * denominator,
                    denominator * value_fraction.denominator);
}

Fraction Fraction::operator*(const Fraction &value_fraction) const {
    return Fraction(numerator * value_fraction.numerator,
                    denominator * value_fraction.denominator);
}

Fraction Fraction::operator/(const Fraction &value_fraction) const {
    return Fraction(numerator * value_fraction.denominator,
                    denominator * value_fraction.numerator);
}

Fraction &Fraction::operator=(const Fraction &value_fraction) = default;
