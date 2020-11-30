//
// Created by Алексей Трутнев on 01.12.2020.
//

#ifndef UNTITLED14_FRACTION_H
#define UNTITLED14_FRACTION_H

#include<iostream>
#include<string>
#include<algorithm>

class Fraction {
private:
    int numerator;
    int denominator;

protected:
    void normalize();

public:
    [[nodiscard]] std::string getValue() const;
    [[nodiscard]] int getNumerator() const;
    [[nodiscard]] int getDenominator() const;

    //  Constructors

    explicit Fraction(int numerator = 0, int denominator = 1) {
        try {
            if (denominator == 0) {
                throw denominator;
            }
            this->numerator = numerator;
            this->denominator = denominator;
            normalize();
        }
        catch (int a) {
            std::cerr << "We caught a zero value of denominator: " << a << std::endl;
        }
    }

    Fraction(Fraction const &toCopy) {
        this->numerator = toCopy.numerator;
        this->denominator = toCopy.denominator;
        normalize();
    }

    //  Operators

    Fraction& operator= (const Fraction& fract) {
        try {
            if (fract.denominator == 0) {
                throw denominator;
            }
            this->numerator = fract.numerator;
            this->denominator = fract.denominator;
            normalize();
            return *this;
        }
        catch (int a) {
            std::cerr << "We caught a zero value of denominator: " << a << std::endl;
        }
    }

    Fraction operator+ (const Fraction& addendum) const {
        int numer = numerator * addendum.denominator + addendum.numerator * denominator;
        int denom = denominator * addendum.denominator;
        Fraction result(numer, denom);
        return result;
    }

    Fraction operator- (const Fraction& subtrahend) const {
        int numer = numerator * subtrahend.denominator - subtrahend.numerator * denominator;
        int denom = denominator * subtrahend.denominator;
        Fraction result(numer, denom);
        return result;
    }

    Fraction operator* (const Fraction& multiplier) const {
        int numer = numerator * multiplier.numerator;
        int denom = denominator * multiplier.denominator;
        Fraction result(numer, denom);
        return result;
    }

    Fraction operator/ (const Fraction& divisor) const {
        int numer = this->numerator * divisor.denominator;
        int denom = this->denominator * divisor.numerator;
        Fraction result(numer, denom);
        return result;
    }
};

#endif //UNTITLED14_FRACTION_H
