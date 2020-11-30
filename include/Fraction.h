// Copyright 2020 <Jiiijyyy>
#ifndef FRACTION_H_
#define FRACTION_H_
#include <cmath>
#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator, denominator;
	void normalize();
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction&);
	std::string getValue();
	int getNumerator();
	int getDenominator();
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	Fraction& operator=(const Fraction&);
};
#endif   //   FRACTION_H
