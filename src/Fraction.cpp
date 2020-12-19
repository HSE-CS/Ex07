// Copyright 2020 SalakhovRamazan

#include <stdio.h>
#include <iostream>
#include "Fraction.h"

int check_nod(int num, int den) {
    if (num < 0)
        num *= -1;
    if (den < 0)
        den *= -1;
    int div;
    if (num == den)
        return num;
    if (num == 0)
        return 1;
    int diff = num - den;
    if (diff < 0) {
        diff *= -1;
        div = check_nod(num, diff);
    }else {
        div = check_nod(den, diff);
    }

    return div;
}

Fraction::Fraction(int num, int den) {
    this->numerator = num;
    this->denominator = den;
    normalize();
}

Fraction::Fraction(Fraction& fract) : numerator(fract.numerator),
denominator(fract.denominator) {
    normalize();
}

void Fraction::normalize() {
    try {
        if (this->denominator == 0)
            throw - 1;
    }
    catch (int) {
        exit(-1);
    }
    if ((this->denominator < 0 && this->numerator < 0)
        || (this->denominator < 0 && this->numerator > 0)) {
        this->numerator *= -1;
        this->denominator *= -1;
    }
    int nod = check_nod(this->numerator, this->denominator);
    this->numerator /= nod;
    this->denominator /= nod;
    if (this->numerator == 0)
        this->denominator = 1;
}

std::string Fraction::getValue() const {
    std::string represent_str = "";
    represent_str = std::to_string(this->numerator);
    if (this->denominator != 1)
        represent_str += '/' + std::to_string(this->denominator);
    return represent_str;
}

int Fraction::getNumerator() const {
    return this->numerator;
}

int Fraction::getDenominator() const {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction& frac) {
    int num1 = this->numerator;
    int num2 = frac.numerator;
    int den1 = this->denominator;
    int den2 = frac.denominator;
    if (den1 != den2) {
        num1 *= den2;
        num2 *= den1;
        den1 *= den2;
    }
    Fraction temp_frac(num1 + num2, den1);
    return temp_frac;
}

Fraction Fraction::operator-(const Fraction& frac) {
    int num1 = this->numerator;
    int num2 = frac.numerator;
    int den1 = this->denominator;
    int den2 = frac.denominator;
    if (den1 != den2) {
        num1 *= den2;
        num2 *= den1;
        den1 *= den2;
    }
    Fraction temp_frac(num1 - num2, den1);
    return temp_frac;
}

Fraction Fraction::operator*(const Fraction& frac) {
    Fraction temp_frac(this->numerator * frac.numerator,
        this->denominator * frac.denominator);
    return temp_frac;
}

Fraction Fraction::operator/(const Fraction& frac) {
    Fraction temp_frac(this->numerator * frac.denominator,
        this->denominator * frac.numerator);
    return temp_frac;
}

Fraction& Fraction::operator=(const Fraction& frac) {
    this->numerator = frac.numerator;
    this->denominator = frac.denominator;
    return *this;
}