// Copyright 2020 Alexgiving

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

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
            std::cerr << "We caught a zero value of denominator"<< std::endl;
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
            std::cerr << "We caught a zero value of denominator"<< std::endl;
        }
    }

    Fraction operator+ (const Fraction& add) const {
        int numer = numerator * add.denominator + add.numerator * denominator;
        int denom = denominator * add.denominator;
        Fraction result(numer, denom);
        return result;
    }

    Fraction operator- (const Fraction& sub) const {
        int numer = numerator * sub.denominator - sub.numerator * denominator;
        int denom = denominator * sub.denominator;
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

#endif  // INCLUDE_FRACTION_H_
