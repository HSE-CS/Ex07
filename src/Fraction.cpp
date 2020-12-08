#include "Fraction.h"
#include <string.h>

Fraction::Fraction(int up, int down) {
    this->numerator = up;
    this->denominator = down;
}

Fraction::Fraction(const Fraction& copy) {
    this->numerator = copy.getNumerator();
    this->denominator = copy.getDenominator();
}

void Fraction::normalize() {
    if (this->denominator == 0)
        throw 0;
    if (this->numerator == 1 || this->denominator == 1)
        return;
    int tmp = 2;
    while ((tmp <= abs(this->numerator))&&(tmp <= abs(this->denominator))) {
        if ((this->numerator % tmp == 0)&&(this->denominator % tmp == 0)) {
            this->numerator = this->numerator / tmp;
            this->denominator = this->denominator / tmp;
            tmp = 2;
        }
        else
            tmp++;
    }
    
}

std::string Fraction::getValue() const {
    if (this->denominator != 1) {
        std::string up = std::to_string(this->numerator);
        std::string down = std::to_string(this->denominator);
        return up + "/" + down;
    }
    std::string up = std::to_string(this->numerator);
    return up;
}

int Fraction::getNumerator() const {
    return this->numerator;
}

int Fraction::getDenominator() const {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction& arg) {
    if (this->denominator == arg.getDenominator()) {
        Fraction result(arg.getNumerator() + this->numerator, this->denominator);
        return result;
    }
    Fraction result((arg.getNumerator() * this->denominator) + (this->numerator * arg.getDenominator()), arg.getDenominator() * this->denominator);
    result.normalize();
    return result;
}

Fraction Fraction::operator-(const Fraction& arg) {
    if (this->denominator == arg.getDenominator()) {
        Fraction result(this->numerator - arg.getNumerator(), this->denominator);
        return result;
    }
    Fraction result((this->numerator * arg.getDenominator() - (arg.getNumerator() * this->denominator)), arg.getDenominator() * this->denominator);
    result.normalize();
    return result;
}

Fraction Fraction::operator*(const Fraction& arg) {
    Fraction result(arg.getNumerator() * this->numerator, arg.getDenominator() * this->denominator);
    result.normalize();
    return result;
}

Fraction Fraction::operator/(const Fraction& arg) {
    Fraction result(arg.getDenominator() * this->numerator, arg.getNumerator() * this->denominator);
    result.normalize();
    return result;
}

Fraction Fraction::operator=(const Fraction& arg) {
    this->numerator = arg.getNumerator();
    this->denominator = arg.getDenominator();
    return *this;
}
