// Copyright 2020 Bekina Svetlana
#include "Fraction.h"

#include <exception>
#include <cmath>
#include <stdexcept>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b > 0 && a > 0) {
        if (a > b) a = a % b;
        else 
            b = b = b % a;
    }
    return a + b;
}

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int new_numerator, int new_denominator) {
    if (new_denominator == 0) {
        throw std::invalid_argument("Division by zero");
    }
    numerator = new_numerator;
    denominator = new_denominator;
    if (denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
    normalize();
}
Fraction::Fraction(const Fraction& other) {
    numerator = other.getNumerator();
    denominator = other.getDenominator();
}
int Fraction::getNumerator() const { 
    return numerator;
}
int Fraction::getDenominator() const {
    return denominator;
}
std::string Fraction::getValue() const {
    std::string result;
    result = std::to_string(getNumerator())
        + "/" + std::to_string(getDenominator());
    return result;
}
Fraction Fraction::normalize() {
    int del = gcd(numerator, denominator);
    numerator /= del;
    denominator /= del;
    return *this;
}
Fraction Fraction::operator+(const Fraction& other) {
    return { other.getDenominator() * getNumerator() 
        + getDenominator() * other.getNumerator(),
        getDenominator() * other.getDenominator() };
}
Fraction Fraction::operator-(const Fraction& other) {
    return { other.getDenominator() * getNumerator()
        - getDenominator() * other.getNumerator(),
        getDenominator() * other.getDenominator() };
}
Fraction Fraction::operator*(const Fraction& other) {
    return { getNumerator() * other.getNumerator(),
        getDenominator() * other.getDenominator() };
}
Fraction Fraction::operator/(const Fraction& other) {
    if (other.getNumerator() == 0) {
        throw std::domain_error("Division by zero");
    }
    return { getNumerator() * other.getDenominator(),
        getDenominator() * other.getNumerator() };
}
Fraction Fraction::operator=(const Fraction& other) {
    numerator = other.getNumerator();
    denominator = other.getDenominator();
    return *this;
}
