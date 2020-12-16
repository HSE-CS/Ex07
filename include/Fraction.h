#include <cmath>
#include <iostream>
#include <string>

class Fraction{
private:
    int numerator, denominator;
    void normalize();

public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction&);
    int getNumerator();
    int getDenominator();
    std::string getValue();
    Fraction operator + (const Fraction&);
    Fraction operator - (const Fraction&);
    Fraction operator * (const Fraction&);
    Fraction operator / (const Fraction&);
    Fraction operator = (const Fraction&);
};