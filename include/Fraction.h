#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <numeric>
#include <string>

class Fraction {
private:
	int numerator;
	int denominator;
	void normalize();

public:
	Fraction(int, int);
	Fraction(const Fraction &);
	std::string getValue();
	int getNumerator();
	int getDenominator();
	Fraction operator+(const Fraction &);
	Fraction operator-(const Fraction &);
	Fraction operator*(const Fraction &);
	Fraction operator/(const Fraction &);
	Fraction &operator=(const Fraction &);
};

#endif  // INCLUDE_FRACTION_H_
