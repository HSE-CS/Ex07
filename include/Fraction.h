#pragma once
#include <string>

class Fraction
{
private:
	int numerator;
	int denominator;
	void normilize();
public:
	Fraction(int a = 0, int b = 1);
	Fraction(const Fraction&);
	std::string getValue();
	inline int getNumerator() const;
	inline int getDenominator() const;
	const Fraction getNormilized() const;
	const Fraction operator+(const Fraction&);
	const Fraction operator-(const Fraction&);
	const Fraction operator*(const Fraction&);
	const Fraction operator/(const Fraction&);
	void operator=(const Fraction&);

};