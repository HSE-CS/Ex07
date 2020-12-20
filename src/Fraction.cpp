#include <cassert>
#include <exception>

#include "../include/Fraction.h"


Fraction::Fraction(const Fraction &fraction) {
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
}

Fraction::Fraction(int numerator, int denominator) {
    if (denominator == 0)
        throw;
    this->numerator = numerator;
    this->denominator = denominator;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    return b == 0 ? a : gcd(b, a % b);
}

void Fraction::normalize() {
    int new_n = this->numerator / gcd(this->numerator, this->denominator);
    int new_d = this->denominator / gcd(this->numerator, this->denominator);
    this->numerator = new_n;
    this->denominator = new_d;
}

std::string Fraction::getValue() {
    if (this->denominator == 1) return std::string(std::to_string(this->numerator));
    std::string result = std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
    return result;
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}

Fraction operator+(const Fraction &left, const Fraction &right) {
    auto result = new Fraction{
            left.numerator * right.denominator + right.numerator * left.denominator,
            left.denominator * right.denominator
    };
    result->normalize();
    return *result;
}

Fraction operator-(const Fraction &left, const Fraction &right) {
    auto result = new Fraction{
            left.numerator * right.denominator - right.numerator * left.denominator,
            left.denominator * right.denominator
    };
    result->normalize();
    return *result;
}

Fraction operator*(const Fraction &left, const Fraction &right) {
    auto result = new Fraction{
            left.numerator * right.numerator,
            left.denominator * right.denominator
    };
    result->normalize();
    return *result;
}

Fraction operator/(const Fraction &left, const Fraction &right) {
    auto result = new Fraction{
            left.numerator * right.denominator,
            left.denominator * right.numerator
    };
    result->normalize();
    return *result;
}

Fraction &Fraction::operator=(const Fraction &fraction) = default;
