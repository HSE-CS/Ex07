Copyright 2020 Tatsenko Alexey
#pragma once
#include<iostream>
#include<string>

class Fraction {
 private:
    int numerator, denominator;
    void normalize();

 public:
    Fraction();
    Fraction(const Fraction& y);
    Fraction(int x, int y);
    std::string getValue();
    int getNumerator();
    int  getDenominator();
    Fraction operator+(Fraction y);
    Fraction operator-(Fraction y);
    Fraction operator*(Fraction y);
    Fraction operator/(Fraction y);
    Fraction& operator=(Fraction y);
};
