// Copyright 2020 Nikita Naumov
#include "Fraction.h"


int gcd (unsigned int n1, unsigned int n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction::Fraction(Fraction& exemplar) {
    this->numerator = exemplar.numerator;
    this->denominator = exemplar.denominator;
}

void Fraction::normalize() {
    int _gcd = 1;
    _gcd = gcd(std::abs(this->numerator), this->denominator);
    this->numerator /= _gcd;
    this->denominator /= _gcd;
}

std::string Fraction::getValue() {
    std::string string;
    if (this->denominator != 1) {
       string += std::to_string(this->numerator) + (std::string)"/" + std::to_string(this->denominator);
    }
    else {
        string += std::to_string(this->numerator);
    }
    return string;
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}
