#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class Fraction {
private:
	int numerator, denumerator;
	Fraction normalize();
public:
	explicit Fraction(
		int numerator = 0,
		int denumerator = 1);
	Fraction(const Fraction& fr);
	std::string getValue();
	int getNumerator();
	int getDenumerator();
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);
	Fraction operator=(Fraction&);
};
#endif
