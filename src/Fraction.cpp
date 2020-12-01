// Copyright 2020 JGMAx
#include "Fraction.h"

int Fraction::getGCD() const {
    int num = abs(num);
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
        num /= GCD;
        denom /= GCD;
    }
}

std::string Fraction::getValue() const {
    if (denom == 1 || num == 0) {
        return std::to_string(num);
    } else {
        std::string str;

        str += std::to_string(num);
        str += '/';
        str += std::to_string(denom);

        return str;
    }
}

int Fraction::getNumerator() const {
    return num;
}

int Fraction::getDenominator() const {
    return denom;
}

Fraction Fraction::operator*(const Fraction &f) const {
    return Fraction(num * f.num, denom * f.denom);
}

Fraction Fraction::operator/(const Fraction &f) const {
    return Fraction(num * f.denom, denom * f.num);
}

Fraction Fraction::operator+(const Fraction &f) const {
    return Fraction((num * f.denom) + (denom * f.num), denom * f.denom);
}

Fraction Fraction::operator-(const Fraction &f) const {
    return Fraction((num * f.denom) - (denom * f.num), denom * f.denom);
}

Fraction& Fraction::operator=(const Fraction &f) {
    this->num = f.num;
    this->denom = f.denom;
    return *this;
}
