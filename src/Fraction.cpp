// Copyright 2020 stick
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    if (denominator == 0) {
        throw;
    }
}

Fraction::Fraction(const Fraction &copy) {
    numerator = copy.numerator;
    denominator = copy.denominator;
    if (denominator == 0) {
        throw;
    }
}

void Fraction::normalize() {
    if (numerator == 0) {
        denominator = 1;
        return;
    } else {
        if (numerator < 0 && denominator < 0) {
            numerator = abs(numerator);
            denominator = abs(denominator);
        }
        int min = abs(numerator) > abs(denominator) ? abs(denominator) : abs(numerator);
        for (int i = 1; i <= min; ++i) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator /= i;
                denominator /= i;
                i=1;
            }
        }
    }
}

std::string Fraction::getValue() {
    std::string buffer;
    if (getNumerator() == getDenominator())
        return "1";
    else if (getNumerator() == 0)
        return "0";
    else if (getNumerator() < 0 && getDenominator() > 0 || getNumerator() > 0 && getDenominator() < 0)
        buffer += "-";
    buffer += std::to_string(std::abs(getNumerator())) + "/"
              + std::to_string(std::abs(getDenominator()));
    return buffer;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::operator+(const Fraction &fraction) {
    Fraction result(numerator * fraction.denominator +
                    denominator * fraction.numerator, fraction.denominator * denominator);
    if (result.denominator == 0) {
        throw;
    }
    result.normalize();
    return result;
}

Fraction Fraction::operator-(const Fraction &fraction) {
    Fraction result(numerator * fraction.denominator -
                  denominator * fraction.numerator, fraction.denominator * denominator);
    if (result.denominator == 0) {
        throw;
    }
    result.normalize();
    return result;
}

Fraction Fraction::operator*(const Fraction &fraction) {
    Fraction result(numerator * fraction.numerator,
                  fraction.denominator * denominator);
    if (result.denominator == 0) {
        throw;
    }
    result.normalize();
    return result;
}

Fraction Fraction::operator/(const Fraction &fraction) {
    Fraction temp(numerator * fraction.denominator,
                  fraction.numerator * denominator);
    if (temp.denominator == 0) {
        throw;
    }
    temp.normalize();
    return temp;
}

Fraction &Fraction::operator=(const Fraction &fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    if (this->denominator == 0) {
        throw;
    }
    return *this;
}