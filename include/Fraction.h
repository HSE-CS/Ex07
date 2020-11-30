// Copyright 2020 Nikita Naumov
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <numeric>

class Fraction {
 private:
    int numerator;
    int denominator;
    void normalize();
 public:
    // constructors
    Fraction(int numerator = 0, int denominator = 1);
    Fraction(Fraction& exemplar);

    // methods
    std::string getValue();
    int getNumerator();
    int getDenominator();

    // operators overloading
    Fraction& operator= (const Fraction& a) {
        this->numerator = a.numerator;
        this->denominator = a.denominator;
        return *this;
    };

    Fraction operator+ (const Fraction& a) {
        Fraction b;
        if (this->denominator == a.denominator){
            b.numerator = this->numerator + a.numerator;
            b.denominator = this->denominator;
        }
        else {
            b.denominator = this->denominator * a.denominator;
            b.numerator = this->numerator * a.denominator + a.numerator * this->denominator;
        }

        b.normalize();

        return b;
    };

    Fraction operator- (const Fraction& a) {
        Fraction b;
        if (this->denominator == a.denominator){
            b.numerator = this->numerator - a.numerator;
            b.denominator = this->denominator;
        }
        else {
            b.denominator = this->denominator * a.denominator;
            b.numerator = this->numerator * a.denominator - a.numerator * this->denominator;
        }

        b.normalize();

        return b;
    };
    Fraction operator* (const Fraction& a) {
        Fraction b;
        b.numerator = this->numerator * a.numerator;
        b.denominator = this->denominator * a.denominator;

        b.normalize();

        return b;
    };

    Fraction operator/ (const Fraction& a) {
        Fraction b;
        b.numerator = this->numerator * a.denominator;
        b.denominator = this->denominator * a.numerator;
        b.normalize();
        return b;
    };
};

#endif // INCLUDE_FRACTION_H_
