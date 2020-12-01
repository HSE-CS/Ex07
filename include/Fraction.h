#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction
{
private:
	int numerator;
	int denominator;
	void normalize();

public:
	explicit Fraction(int n = 0, int d = 1);
    Fraction(const Fraction&);
    std::string getValue() const;
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction& operator=(const Fraction&);

};




#endif	// INCLUDE_FRACTION_H_