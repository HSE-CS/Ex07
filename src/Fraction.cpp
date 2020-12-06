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

Fraction::Fraction(int n, int d) {
    if (d == 0)
        throw runtime_error("Denominator can not equal zero!");
    else {
        this->numerator = n;
        this->denominator = d;
        this->normalize();
    }
}

Fraction::Fraction(const Fraction &fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    this->normalize();
}

string Fraction::getValue() {
    return to_string(this->numerator) + "/" + to_string(this->denominator);
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
    if (fraction.numerator == 0)
        throw runtime_error("Denominator can not equal zero!");
    else {
        int num = this->numerator * fraction.denominator;
        int dec = this->denominator * fraction.numerator;
        return Fraction(num, dec);
    }
}

Fraction & Fraction::operator=(const Fraction &fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    return *this;
}