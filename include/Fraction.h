// Copyright 2020 Nikolaev Ivan


#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
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
    Fraction(const Fraction& fraction);
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& fraction);
    Fraction operator-(const Fraction& fraction);
    Fraction operator*(const Fraction& fraction);
    Fraction operator/(const Fraction& fraction);
    Fraction operator=(const Fraction& fraction);

 private:
    int numerator;
    int denominator;
    void normalize();
};


#endif  // INCLUDE_FRACTION_H_
