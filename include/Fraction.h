// Copyright 2020 VadMack
//
// Created by Vadim Makarov on 30.11.2020.
//

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cstring>
#include <string>

class Fraction {
 private:
    int numerator, denominator;
    void normalize();

 public:
    explicit Fraction(int num = 0, int denom = 1) {
        numerator = num;
        denominator = denom;
        if (denominator == 0) {
            throw "denominator is 0";
        }
        normalize();
    }

    Fraction(const Fraction &fraction) {
        numerator = fraction.numerator;
        denominator = fraction.denominator;
    }

    int getNumerator();
    int getDenominator();
    std::string getValue(const Fraction &fraction);

    Fraction operator+(const Fraction &fraction) {
        int newDenum = denominator * fraction.denominator;
        int a = numerator * fraction.denominator;
        int b = fraction.numerator * denominator;
        int newNum = a + b;
        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator-(const Fraction &fraction) {
        int newDenum = denominator * fraction.denominator;
        int a = numerator * fraction.denominator;
        int b = fraction.numerator * denominator;
        int newNum = a - b;
        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator*(const Fraction &fraction) {
        int newDenum = denominator * fraction.denominator;
        int newNum = numerator * fraction.numerator;
        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator/(const Fraction &fraction) {
        int newDenum = denominator * fraction.numerator;
        int newNum = numerator * fraction.denominator;
        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator=(const Fraction &fraction) {
        numerator = fraction.numerator;
        denominator = fraction.denominator;
        return *this;
    }
};


#endif  // INCLUDE_FRACTION_H_
