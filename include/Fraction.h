// Copyright [2020] <Balayan Roman>

#ifndef EX07_INCLUDE_FRACTION_H_
#define EX07_INCLUDE_FRACTION_H_

#include <string>

class Fraction
{
 private:
	int numerator;
	int denominator;
	void normilize();
 public:
	explicit Fraction(int a = 0, int b = 1);
	Fraction(const Fraction&);
	std::string getValue();
	int getNumerator() const;
	int getDenominator() const;
	const Fraction getNormilized() const;
	const Fraction operator+(const Fraction&);
	const Fraction operator-(const Fraction&);
	const Fraction operator*(const Fraction&);
	const Fraction operator/(const Fraction&);
	void operator=(const Fraction&);
};

#endif

