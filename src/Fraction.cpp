/*
 * @author Stanislav Stoianov
 */

#include "../include/Fraction.h"

void Fraction::normalize() {
    auto denominator = this->denominator;
    auto numerator = this->numerator;
    if (denominator < numerator) std::swap(denominator, numerator);
    while (numerator) {
        denominator %= numerator;
        std::swap(denominator, numerator);
    }
    int32_t divisor = denominator;
    this->denominator /= divisor;
    this->numerator /= divisor;
}

std::string Fraction::getValue() const {
    return this->denominator == 1 ? std::to_string(this->numerator) : std::to_string(this->numerator) + "/" +
                                                                      std::to_string(this->denominator);
}

int32_t Fraction::getNumerator() const {
    return this->numerator;
}

int32_t Fraction::getDenominator() const {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction &fraction) const {
    return Fraction(this->numerator * fraction.denominator + fraction.numerator * this->denominator,
                    this->denominator * fraction.denominator);
}

Fraction Fraction::operator-(const Fraction &fraction) const {
    return Fraction(this->numerator * fraction.denominator - fraction.numerator * this->denominator,
                    this->denominator * fraction.denominator);
}

Fraction Fraction::operator*(const Fraction &fraction) const {
    return Fraction(this->numerator * fraction.numerator, this->denominator * fraction.denominator);
}

Fraction Fraction::operator/(const Fraction &fraction) const {
    return Fraction(this->numerator * fraction.denominator, this->denominator * fraction.numerator);
}

Fraction &Fraction::operator=(const Fraction &fraction) {
    this->numerator = fraction.getNumerator();
    this->denominator = fraction.getDenominator();
    return *this;
}
