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
         Fraction result(this->numerator * sum.denominator + sum.numerator * this->denominator, this->denominator * sum.denominator);
         return result;
     }

     Fraction operator- (const Fraction& sub) {
         Fraction result(this->numerator * sub.denominator - sub.numerator * this->denominator, this->denominator * sub.denominator);
         return result;
     }

     Fraction operator* (const Fraction& mult) {
         Fraction result(this->numerator * mult.numerator, this->denominator * mult.denominator);
         return result;
     }

     Fraction operator/ (const Fraction& div) {
         Fraction result(this->numerator * div.denominator, this->denominator * div.numerator);
         return result;
     }
};

#endif // !INCLUDE_FRACTION_H_