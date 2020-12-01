//
// Created by jmax on 01.12.2020.
//

#ifndef EX_07_FRACTION_H
#define EX_07_FRACTION_H

#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;

    int getGCD();
    void normalize();
 public:
    Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0)
            throw "Denominator is zero";
        this->numerator = numerator;
        this->denominator = denominator;
        normalize();
    }

    Fraction(const Fraction& f) {
        this->numerator = f.numerator;
        this->denominator = f.denominator;
    }

    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&) const;
    Fraction operator-(const Fraction&) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(const Fraction&) const;
    Fraction& operator=(const Fraction&);
};
#endif //EX_07_FRACTION_H
