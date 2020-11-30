// Copyright 2020 Alexgiving

#include "Fraction.h"
#include <iostream>

void Fraction::normalize() {
    if (this->numerator == 0) {
        this->denominator = 1;
        return;
    } else {
        if (denominator < 0) {
            numerator *= -1;
            denominator *= -1;
        }
        int temp;
        int numer = numerator;
        int denom = denominator;
        while (denom) {
            temp = numer % denom;
            numer = denom;
            denom = temp;
        }
        numerator = numerator / abs(numer);
        denominator = denominator / abs(numer);
    }
}

std::string Fraction::getValue() const {
    if (denominator == 1 || numerator == 0) {
        return std::to_string(numerator);
    }
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}
