// Copyright 2020 Khoroshavina Ekaterina
#include "Fraction.h"
#include <string>

int nod(int a, int b) {
    while (a != b && a != 0 && b != 0) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return b;
}

void Fraction::normalize() {
    int temp = nod(this->numerator, this->denominator);
    this->numerator = this->numerator / temp;
    this->denominator = this->denominator / temp;
}

int Fraction::getDenominator() {
    return this->denominator;
}


int Fraction::getNumerator() {
    return this->numerator;
}

std::string Fraction::getValue() {
    normalize();
    std::string res = std::to_string(this->numerator)
        + "/" + std::to_string(this->denominator);
    return res;
}

Fraction Fraction::operator+(const Fraction& fr) {
    int a = this->numerator * fr.denominator
        + fr.numerator * this->denominator;
    int b = this->denominator * fr.denominator;
    Fraction temp = Fraction(a, b);
    temp.normalize();
    return temp;
}

Fraction Fraction::operator-(const Fraction& fr) {
    int a = this->numerator * fr.denominator
        - fr.numerator * this->denominator;
    int b = this->denominator * fr.denominator;
    Fraction temp = Fraction(a, b);
    temp.normalize();
    return temp;
}

Fraction Fraction::operator*(const Fraction& fr) {
    int a = this->numerator * fr.numerator;
    int b = this->denominator * fr.denominator;
    Fraction temp = Fraction(a, b);
    temp.normalize();
    return temp;
}

Fraction Fraction::operator/(const Fraction& fr) {
    int a = this->numerator * fr.denominator;
    int b = this->denominator * fr.numerator;
    Fraction temp = Fraction(a, b);
    temp.normalize();
    return temp;
}

Fraction& Fraction::operator=(const Fraction& fr) {
    this->numerator = fr.numerator;
    this->denominator = fr.denominator;
    return *this;
}
