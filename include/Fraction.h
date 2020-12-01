// Copyright 2020 JGMAx
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {

 private:
    int num;
    int denom;

    int getGCD() const;
    void normalize();
 public:
    explicit Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0)
            throw "Denominator is zero";
        this->num = numerator;
        this->denom = denominator;
        normalize();
    }

    Fraction(const Fraction& f): num(f.num), denom(f.denom) {}

    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&) const;
    Fraction operator-(const Fraction&) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(const Fraction&) const;
    Fraction& operator=(const Fraction&);
};

#endif // INCLUDE_FRACTION_H_
