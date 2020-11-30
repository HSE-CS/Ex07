#include <string>
#ifndef _INCLUDE_FRACTION_H_
#define _INCLUDE_FRACTION_H_
class Fraction
{
 private:
    int numerator;
    unsigned int denominator;
    void normalize();
 public:
    Fraction(int _numerator = 0, unsigned int denominator = 1);
    Fraction(Fraction& fraction);
    std::string getValue();
    int getNumerator();
    unsigned int getDenominator();
    Fraction operator+ (Fraction& fc);
    Fraction operator- (Fraction& fc);
    Fraction operator* (Fraction& fc);
    Fraction operator/ (Fraction& fc);
};
#endif
