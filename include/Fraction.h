#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cstring>
#include <string>

class Fraction 
{
private:
    int numerator, denominator;
    void normalize();

public:
    explicit Fraction(int num = 0, int denom = 1) 
    {
        numerator = num;
        denominator = denom;

        if (denominator == 0) 
        {
            throw "denominator is 0";
        }
        normalize();
    }

    Fraction(const Fraction& fraction) 
    {
        numerator = fraction.numerator;
        denominator = fraction.denominator;
    }

    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction& fraction) 
    {
        int newden = denominator * fraction.denominator;
        int a = numerator * fraction.denominator;
        int b = fraction.numerator * denominator;
        int newnum = a + b;

        Fraction newFraction(newnum, newden);
        return newFraction;
    }

    Fraction operator-(const Fraction& fraction) 
    {
        int newden = denominator * fraction.denominator;
        int a = numerator * fraction.denominator;
        int b = fraction.numerator * denominator;
        int newnum = a - b;

        Fraction newFraction(newnum, newden);
        return newFraction;
    }

    Fraction operator*(const Fraction& fraction) 
    {
        int newDenum = denominator * fraction.denominator;
        int newNum = numerator * fraction.numerator;

        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator/(const Fraction& fraction) 
    {
        int newDenum = denominator * fraction.numerator;
        int newNum = numerator * fraction.denominator;

        Fraction newFraction(newNum, newDenum);
        return newFraction;
    }

    Fraction operator=(const Fraction& fraction) 
    {
        numerator = fraction.numerator;
        denominator = fraction.denominator;
        return *this;
    }
};

#endif // INCLUDE_FRACTION_H_