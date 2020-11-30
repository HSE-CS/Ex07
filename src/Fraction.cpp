// Copyright 2020 FOM
#include <iostream>
#include "Fraction.h"

Fraction::Fraction(const Fraction& fptr) {
    numerator = fptr.numerator;
    denominator = fptr.denominator;
}

void Fraction::normalize() {
    int num_1 = abs(numerator);
    int num_2 = abs(denominator);
    while (num_1 != 0 && num_2 != 0) {
        if (num_1 > num_2)
            num_1 = num_1 % num_2;
        else
            num_2 = num_2 % num_1;
    }
    numerator /= num_1 + num_2;
    denominator /= num_1 + num_2;
    if (denominator == 0) {
        throw;
    }
}

std::string Fraction::getValue() {
    if (denominator == 1) {
        return std::to_string(numerator);
    }
    else {
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& fptr) {
    return  Fraction(fptr.denominator * numerator + 
        denominator * fptr.numerator, 
        denominator * fptr.denominator);
}

Fraction Fraction::operator-(const Fraction& fptr) {
    return Fraction(fptr.denominator * numerator -
        denominator * fptr.numerator,
        denominator * fptr.denominator);
}

Fraction Fraction::operator*(const Fraction& fptr) {
    return Fraction(numerator * fptr.numerator, 
        denominator * fptr.denominator);
}

Fraction Fraction::operator/(const Fraction& fptr) {
    return Fraction(numerator * fptr.denominator, 
        denominator * fptr.numerator);
}

Fraction & Fraction::operator=(const Fraction& fptr) {
    numerator = fptr.numerator;
    denominator = fptr.denominator;
    if (denominator == 0) {
        throw;
    }
    return *this;
}