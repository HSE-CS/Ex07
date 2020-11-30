// Copyright 2020 VadMack
//
// Created by Vadim Makarov on 30.11.2020.
//

#ifndef TEST_FRACTION_H
#define TEST_FRACTION_H

#include <cstring>


using namespace std;

class Fraction {
private:
    int numerator, denominator;
    void normalize();
public:
    explicit Fraction(int num = 0, int denom = 1){
        numerator = num;
        denominator = denom;
        if (denominator == 0){
            throw "denominator is 0";
        }
        normalize();
    }

    Fraction(const Fraction &fraction){
        numerator = fraction.numerator;
        denominator = fraction.denominator;
    }

    int getNumerator();
    int getDenominator();
    string getValue(Fraction &fraction);

    Fraction operator+(const Fraction &fraction){
        int newDenum = denominator * fraction.denominator;
        int newNum = (numerator * fraction.denominator) + (fraction.numerator * denominator);
        Fraction newFraction(newNum, newDenum);
        //newFraction.normalize();
        return newFraction;
    }

    Fraction operator-(const Fraction &fraction){
        int newDenum = denominator * fraction.denominator;
        int newNum = (numerator * fraction.denominator) - (fraction.numerator * denominator);
        Fraction newFraction(newNum, newDenum);
        //newFraction.normalize();
        return newFraction;
    }

    Fraction operator*(const Fraction &fraction){
        int newDenum = denominator * fraction.denominator;
        int newNum = numerator * fraction.numerator;
        Fraction newFraction(newNum, newDenum);
        //newFraction.normalize();
        return newFraction;
    }

    Fraction operator/(const Fraction &fraction){
        int newDenum = denominator * fraction.numerator;
        int newNum = numerator * fraction.denominator;
        Fraction newFraction(newNum, newDenum);
        //newFraction.normalize();
        return newFraction;
    }

    Fraction operator=(const Fraction &fraction){
        numerator = fraction.numerator;
        denominator = fraction.denominator;
        return *this;
    }
};


#endif //TEST_FRACTION_H
