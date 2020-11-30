// Copyright 2020 <Jiiijyyy>
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    if (denominator == 0) {
        throw;
    }
}

Fraction::Fraction() {
    this->numerator = 0;
    this->denominator = 1;
}

Fraction::Fraction(const Fraction& s) {
    this->numerator = s.numerator;
    this->denominator = s.denominator;
    if (denominator == 0) {
        throw;
    }
}

void Fraction::normalize() {
    int num_save_n = this->numerator;
    int num_save_d = this->denominator;
    while (num_save_n != 0 && num_save_d != 0) {
        if (num_save_n >= num_save_d) {
            num_save_n %= num_save_d;
        } else {
            num_save_d %= num_save_n;
        }
    }
    int nod = num_save_d + num_save_n;
    this->denominator /= nod;
    this->numerator /= nod;
    if (denominator == 0) {
        throw;
    }
}

std::string Fraction::getValue() {
    if (getNumerator() == getDenominator())
        return "1";
    else if (!getNumerator())
        return "0";
    else if (getNumerator() < 0 || getDenominator() < 0 &&
        !(getNumerator() < 0 && getDenominator() < 0))
        return "-" + std::to_string(std::abs(getNumerator())) + "/"
        + std::to_string(std::abs(getDenominator()));
    else if (getNumerator() < 0 && getDenominator() < 0)
        return std::to_string(std::abs(getNumerator())) + "/"
        + std::to_string(std::abs(getDenominator()));
    else
        return std::to_string(getNumerator()) + "/"
        + std::to_string(getDenominator());
}
int Fraction::getNumerator() {
    return this->numerator;
}
int Fraction::getDenominator() {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction& c) {
    Fraction temp(this->numerator * c.denominator + this->denominator
        * c.numerator, c.denominator * this->denominator);
    if (temp.denominator == 0) {
        throw;
    }
    temp.normalize();
    return temp;
}

Fraction Fraction::operator-(const Fraction& c) {
    Fraction temp(this->numerator * c.denominator - this->denominator
        * c.numerator, c.denominator * this->denominator);
    if (temp.denominator == 0) {
        throw;
    }
    temp.normalize();
    return temp;
}

Fraction Fraction::operator*(const Fraction& c) {
    Fraction temp(this->numerator * c.numerator,
        c.denominator * this->denominator);
    if (temp.denominator == 0) {
        throw;
    }
    temp.normalize();
    return temp;
}

Fraction Fraction::operator/(const Fraction& c) {
    Fraction temp(this->numerator * c.denominator,
        c.numerator * this->denominator);
    if (temp.denominator == 0) {
        throw;
    }
    temp.normalize();
    return temp;
}

Fraction& Fraction::operator=(const Fraction& c) {
    this->numerator = c.numerator;
    this->denominator = c.denominator;
    if (this->denominator == 0) {
        throw;
    }
    return *this;
} 