// Copyright 2020 JGMAx
#include "Fraction.h"

int Fraction::getGCD() const {
    int num = abs(numer);
    int den = abs(denom);

    while (num != 0 && den != 0) {
        if (num > den)
            num %= den;
        else
            den %= num;
    }
    if (denom < 0)
        return -(num + den);
    else
        return num + den;
}

void Fraction::normalize() {
    int GCD = getGCD();
    if (GCD != 0) {
        numer /= GCD;
        denom /= GCD;
    }
}

std::string Fraction::getValue() const {
    if (denom == 1 || numer == 0) {
        return std::to_string(numer);
    } else {
        std::string str;

        str += std::to_string(numer);
        str += '/';
        str += std::to_string(denom);

        return str;
    }
}

int Fraction::getNumerator() const {
    return numer;
}

int Fraction::getDenominator() const {
    return denom;
}

Fraction Fraction::operator*(const Fraction &f) const {
    return Fraction(numer * f.numer, denom * f.denom);
}

Fraction Fraction::operator/(const Fraction &f) const {
    return Fraction(numer * f.denom, denom * f.numer);
}

Fraction Fraction::operator+(const Fraction &f) const {
    return Fraction((numer * f.denom) + (denom * f.numer), denom * f.denom);
}

Fraction Fraction::operator-(const Fraction &f) const {
    return Fraction((numer * f.denom) - (denom * f.numer), denom * f.denom);
}

Fraction& Fraction::operator=(const Fraction &f) {
    this->numer = f.numer;
    this->denom = f.denom;
    return *this;
}
