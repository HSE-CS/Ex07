// Copyright 2020 Nikolaev Ivan
#ifndef INCLUDE_FRACTION_H
#define INCLUDE_FRACTION_H

#include <string>

int getGCD(int a, int b);

class Fraction {
public:
	explicit Fraction(int numerator = 0, int denominator = 1);
	Fraction(const Fraction &fraction);
	std::string getValue();
	int getNumerator();
	int getDenominator();
	Fraction operator+(const Fraction &fraction);
	Fraction operator-(const Fraction &fraction);
	Fraction operator*(const Fraction &fraction);
	Fraction operator/(const Fraction &fraction);
	Fraction operator=(const Fraction &fraction);
private:
	int numerator;
	int denominator;
	void normalize();
};

#endif  // INCLUDE_FRACTION_H_