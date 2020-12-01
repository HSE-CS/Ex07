//Copyright 2020 Uskova
#include "Fraction.h"

#include <string>

int Nod(int a, int b) {
    if (a != 0 && b != 0) {
        while (a != b) {
            if (a > b) {
                int tmp = a;
                a = b;
                b = tmp;
            }
            b -= a;
        }
        return a;
    }
    else
        return 1;
}

Fraction Fraction::normalize() {
    int nod = Nod(abs(this->numerator), abs(this->denominator));
    if (nod != 1) {
        this->numerator = this->numerator / nod;
        this->denominator = this->denominator / nod;
    }
    if (this->numerator < 0 && this->denominator < 0) {
        this->numerator = this->numerator * (-1);
        this->denominator = this->denominator * (-1);
    }
    if (this->numerator == 0) {
        this->denominator = 1;
    }
    return *this;
}

Fraction::Fraction(int numerat, int denominat) {
    this->numerator = numerat;
    this->denominator = denominat;
}

Fraction::Fraction(const Fraction& new_frac) {
    this->numerator = new_frac.numerator;
    this->denominator = new_frac.denominator;
}

std::string Fraction::getValue() {
    if(this->denominator == 1)
        return std::to_string(this->numerator);
    else {
        return std::to_string(this->numerator) + '/' + std::to_string(this->denominator);
    }
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& fract) {
    Fraction new_frac(this->numerator * fract.denominator + fract.numerator * this->denominator, this->denominator * fract.denominator);
    return new_frac.normalize();
}

Fraction Fraction::operator-(const Fraction& fract) {
    Fraction new_frac(this->numerator - fract.denominator + fract.numerator * this->denominator, this->denominator * fract.denominator);
    return new_frac.normalize();
}

Fraction Fraction::operator*(const Fraction& fract) {
    Fraction new_frac(this->numerator * fract.numerator, this->denominator * fract.denominator);
    return new_frac.normalize();
}

Fraction Fraction::operator/(const Fraction& fract) {
    Fraction new_frac(this->numerator * fract.denominator, this->denominator * fract.numerator);
    return new_frac.normalize();
}

Fraction Fraction::operator=(const Fraction& fract) {
    this->numerator = fract.numerator;
    this->denominator = fract.denominator;
    return *this;
}