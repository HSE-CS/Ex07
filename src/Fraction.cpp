// Copyright 2020 Elizaveta Drobot
#include "Fraction.h"
#include <cmath>
#include <algorithm>
#include <cstdlib>


Fraction::Fraction(int a, int b) {
    if (b == 0) {
        throw - 1;
    }
    this->numerator = a;
    this->denominator = b;
}

Fraction::Fraction(Fraction& fnew) {
    this->numerator = fnew.numerator;
    this->denominator = fnew.denominator;
}

void Fraction::normalize() {
    if (this->numerator == 0) {
        this->denominator = 1;
    } else {
        for (int i = std::max(this->numerator, this->denominator); i > 1; i--) {
            if ((this->numerator % i == 0) && (this->denominator % i == 0)) {
                this->numerator = this->numerator / i;
                this->denominator = this->denominator / i;
            }
        }
    }
    if (this->denominator < 0) {
        this->denominator *= -1;
        this->numerator *= -1;
    }
}

std::string Fraction::getValue() {
    normalize();
    std::string s;
    if (denominator == 1) {
        s = std::to_string(this->numerator);
    } else {
        s = std::to_string(this->numerator);
        s += '/';
        s += std::to_string(this->denominator);
    }
    return s;
}

int Fraction::getNumerator() {
    normalize();
    return this->numerator;
}

int Fraction::getDenominator() {
    normalize();
    return this->denominator;
}
