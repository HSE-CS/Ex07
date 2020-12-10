// Copyright 2020 KostinAndrej
//
// Created by andryjkost on 09.12.2020.
//
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_


#include <string>

class Fraction {
private:
    int numerator, denominator;


public:
    explicit Fraction(int value_numerator = 0, int value_denominator = 1) {
        if (value_denominator == 0) {
            throw "ERROR! Denominator is zero";
        } else {
            numerator = value_numerator;
            denominator = value_denominator;
        }
        normalize();
    }

    Fraction(const Fraction &value_fraction) {
        numerator = value_fraction.numerator;
        denominator = value_fraction.denominator;
    }


    int getNumerator() const;

    int getDenominator() const;

    Fraction operator+(const Fraction &value_fraction) const;

    Fraction operator-(const Fraction &value_fraction) const;

    Fraction operator*(const Fraction &value_fraction) const;

    Fraction operator/(const Fraction &value_fraction) const;

    Fraction &operator=(const Fraction &value_fraction);

    std::string getValue();

    void normalize();
};
#endif  // INCLUDE_FRACTION_H_