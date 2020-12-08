#ifndef Fraction_h
#define Fraction_h

#include <cstring>
#include <iostream>

class Fraction {
private:
    int numerator, denominator;
public:
    explicit Fraction(int up = 0, int down = 1);
    Fraction(const Fraction& copy);
    void normalize();
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator=(const Fraction&);
};

#endif
