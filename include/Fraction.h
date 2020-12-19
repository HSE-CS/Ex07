// Copyright 2020 SalakhovRamazan
#pragma once
#include <string>
class Fraction {
private:
	int numerator;
	int denominator;
	void normalize();
public:
	explicit Fraction(int = 0, int = 1);
	Fraction(Fraction&);
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	Fraction& operator=(const Fraction&);
	std::string getValue() const;
	int getNumerator() const;
	int getDenominator() const;
};

