//
// Created by sharg on 01.12.2020.
//
#include "Fraction.h"

using namespace std;

int getNOD(int firstNumber, int secondNumber) {
    while (firstNumber != 0 && secondNumber != 0) {
        if (firstNumber > secondNumber) {
            firstNumber %= secondNumber;
        } else {
            secondNumber %= firstNumber;
        }
    }
    return firstNumber + secondNumber;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

string Fraction::getValue() {
    normalize();
    if (denominator == 1)
        return to_string(numerator);
    else
        return to_string(numerator) + "/" + to_string(denominator);
}

void Fraction::normalize() {
    int NOD = getNOD(abs(numerator), abs(denominator));
    numerator /= NOD;
    denominator /= NOD;
}

Fraction Fraction::operator+(const Fraction &valueFraction) const {
    return Fraction(numerator * valueFraction.denominator + valueFraction.numerator * denominator,
                    denominator * valueFraction.denominator);
}

Fraction Fraction::operator-(const Fraction &valueFraction) const {
    return Fraction(numerator * valueFraction.denominator - valueFraction.numerator * denominator,
                    denominator * valueFraction.denominator);
}

Fraction Fraction::operator*(const Fraction &valueFraction) const {
    return Fraction(numerator * valueFraction.numerator, denominator * valueFraction.denominator);
}

Fraction Fraction::operator/(const Fraction &valueFraction) const {
    return Fraction(numerator * valueFraction.denominator, denominator * valueFraction.numerator);
}

Fraction &Fraction::operator=(const Fraction &valueFraction) = default;
