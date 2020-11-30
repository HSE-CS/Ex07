// Copyright 2020 test
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include<iostream>
#include<string>
#include<algorithm>

class Fraction {
 private:
     int numerator;
     int denominator;
     void normalize();

 public:
     explicit Fraction(int numerator = 0, int denominator = 1);
     Fraction(Fraction &toCopy);
     std::string getValue();
     int getNumerator();     
     int getDenominator();     
     Fraction& operator= (const Fraction& fract) {
         if (fract.denominator == 0) {
             throw - 1;
         }
         this->numerator = fract.numerator;
         this->denominator = fract.denominator;
         normalize();
         return *this;
     }
     Fraction operator+ (const Fraction& sum) {
         int numer = numerator * sum.denominator + sum.numerator * denominator;
         int denom = denominator * sum.denominator;
         Fraction result(numer, denom);
         return result;
     }
     Fraction operator- (const Fraction& sub) {
         int numer = numerator * sub.denominator - sub.numerator * denominator;
         int denom = denominator * sub.denominator;
         Fraction result(numer, denom);
         return result;
     }
     Fraction operator* (const Fraction& mult) {
         int numer = numerator * mult.numerator;
         int denom = denominator * mult.denominator;
         Fraction result( numer, denom);
         return result;
     }
     Fraction operator/ (const Fraction& div) {
         int numer = numerator * div.denominator;
         int denom = denominator * div.numerator;
         Fraction result( numer, denom);
         return result;
     }
};

#endif  // INCLUDE_FRACTION_H_
