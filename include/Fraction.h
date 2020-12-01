// Copyright 2020 SharunovEvgenya
//
// Created by sharg on 01.12.2020.
//

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
    private:
        int numerator = 0, denominator = 0;

    public:
        explicit Fraction(int valueNumerator = 0, int valueDenominator = 1) {
            if (valueDenominator == 0) {
                throw "error denominator is zero";
            } else {
                numerator = valueNumerator;
                denominator = valueDenominator;
            }
            normalize();
        }

        Fraction(const Fraction &valueFraction) {
            numerator = valueFraction.numerator,
                    denominator = valueFraction.denominator;
        }


        int getNumerator() const;

        int getDenominator() const;

        Fraction operator+(const Fraction &valueFraction) const;

        Fraction operator-(const Fraction &valueFraction) const;

        Fraction operator*(const Fraction &valueFraction) const;

        Fraction operator/(const Fraction &valueFraction) const;

        Fraction &operator=(const Fraction &valueFraction);

        std::string getValue();

        void normalize();
};

#endif  // INCLUDE_FRACTION_H_
