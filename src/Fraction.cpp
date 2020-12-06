// Copyright 2020 VarginDimitry
#include "Fraction.h"

int Fraction::nod(int a, int b) {
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int Fraction::nok(int a, int b) {
    return (int) (a * b / Fraction::nod(a, b));
}

void Fraction::normalize() {
    if (this->numerator == 0)
        this->denominator = 1;
    else {
        int n = nod(this->numerator, this->denominator);
        this->numerator = (int) (this->numerator / n);
        this->denominator = (int) (this->denominator / n);
    }
}

Fraction::Fraction() {
    this->numerator = 0;
    this->denominator = 1;
}
Fraction::Fraction(int n, int d) {
    if (d == 0)
        d = 1;
    this->numerator = n;
    this->denominator = d;
    this->normalize();
}

Fraction::Fraction(const Fraction &fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    this->normalize();
}

std::string Fraction::getValue() {
    return std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction &fraction) {
    int num = this->numerator * fraction.denominator + fraction.numerator * this->denominator;
    int dec = this->denominator * fraction.denominator;
    return Fraction(num, dec);
}

Fraction Fraction::operator-(const Fraction &fraction) {
    int num = this->numerator * fraction.denominator - fraction.numerator * this->denominator;
    int dec = this->denominator * fraction.denominator;
    return Fraction(num, dec);
}

Fraction Fraction::operator*(const Fraction &fraction) {
    int num = this->numerator * fraction.numerator;
    int dec = this->denominator * fraction.denominator;
    return Fraction(num, dec);
}

Fraction Fraction::operator/(const Fraction &fraction) {
    int dec;
    if (fraction.numerator == 0)
        dec = this->denominator;
    else
        dec = this->denominator * fraction.numerator;
    int num = this->numerator * fraction.denominator;
    return Fraction(num, dec);
}

Fraction & Fraction::operator=(const Fraction &fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    return *this;
}