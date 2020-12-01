//Copyright 2020 VladimirUspensky
//
// Created by vladimir on 01.12.2020.
//

#ifndef EX7_FRACTION_H
#define EX7_FRACTION_H

#include <cstring>
#include <string>


class Fraction {
private:
    int numerator;
    int denominator;
    void normalize();

public:
    explicit Fraction(int new_num = 0, int new_den = 1) {
        if (denominator == 0) {
            throw "den is equal to NULL";
        } else {
            numerator = new_num;
            denominator = new_den;
        }
        normalize();
    }

    Fraction(const Fraction &frac) {
        numerator = frac.numerator;
        denominator = frac.denominator;
    }

    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction &frac) const{
        int new_den = denominator * frac.denominator;
        int first = numerator * frac.denominator;
        int second = frac.numerator * denominator;
        int new_num = first + second;
        Fraction new_frac(new_num, new_den);
        return new_frac;
    }

    Fraction operator*(const Fraction &frac) const{
        int new_den = denominator * frac.denominator;
        int new_num = numerator * frac.numerator;
        Fraction new_frac(new_num, new_den);
        return new_frac;
    }

    Fraction operator/(const Fraction &frac) const{
        int new_den = denominator * frac.numerator;
        int new_num = numerator * frac.denominator;
        Fraction new_frac(new_num, new_den);
        return new_frac;
    }

    Fraction operator=(const Fraction &frac){
        numerator = frac.numerator;
        denominator = frac.denominator;
        return *this;
    }

    Fraction operator-(const Fraction &frac) const{
        int new_den = denominator * frac.denominator;
        int first = numerator * frac.denominator;
        int second = frac.numerator * denominator;
        int new_num = first - second;
        Fraction new_frac(new_num, new_den);
        return new_frac;
    }
};



#endif //EX7_FRACTION_H

