// Copyright 2020 PollyllyZh
#include "Fraction.h"
void Fraction::normalize() {
    int min = 0;
    if (abs(numerator) < abs(denominator)) {
        min = abs(numerator);
    }
    if ((abs(numerator) > abs(denominator)) ||
        (abs(numerator) == abs(denominator))) {
        min = abs(denominator);
    }
    int k = 1;
    for (int i = 1; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > k)) {
            k = i;
        }
    }
    numerator /= k;
    denominator /= k;
}
Fraction::Fraction(int numerator_, int denominator_) {
    if (denominator_ == 0) {
        throw "Inf";
    }
    if (numerator_ == 0) {
        numerator = numerator_;
        denominator = 1;
    }
    if ((numerator_ != 0) && (denominator_ != 0)) {
        numerator = numerator_;
        denominator = denominator_;
    }
    this->normalize();
}
Fraction::Fraction(const Fraction& fr) {
    numerator = fr.numerator;
    denominator = fr.denominator;
}
std::string Fraction::getValue() {
    std::string numerator_;
    numerator_ += std::to_string(numerator);
    numerator_ += '/';
    numerator_ += std::to_string(denominator);
    return numerator_;
}
int Fraction::getNumerator() {
    return numerator;
}
int Fraction::getDenominator() {
    return denominator;
}
Fraction Fraction::operator+(const Fraction& fr) {
    return Fraction(numerator * fr.denominator +
        fr.numerator * denominator, denominator * fr.denominator);
}
Fraction Fraction::operator-(const Fraction& fr) {
    return Fraction(numerator * fr.denominator -
        fr.numerator * denominator, denominator * fr.denominator);
}
Fraction Fraction::operator*(const Fraction& fr) {
    return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}
Fraction Fraction::operator/(const Fraction& fr) {
    return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}
Fraction Fraction::operator=(const Fraction& fr) {
    numerator = fr.numerator;
    denominator = fr.denominator;
    return *this;
}
