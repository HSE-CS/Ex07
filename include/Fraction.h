#pragma once
#include<iostream>
#include<string>
using namespace std;

class Fraction {

 private:
    int numerator, denominator;
    void normalize();

 public:
    Fraction();
    Fraction(const Fraction& y);
    Fraction(int x, int y);
    string getValue();
    int getNumerator();
    int  getDenominator();
    Fraction operator+(Fraction y);
    Fraction operator-(Fraction y);
    Fraction operator*(Fraction y);
    Fraction operator/(Fraction y);
    Fraction& operator=(Fraction y);

};
