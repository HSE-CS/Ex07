// Copyright 2020 Konina Tatiana

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>

class Fraction {
 public:
	explicit Fraction(int numerator = 0, int denominator = 1) {
		this->numerator = numerator;
		this->denominator = denominator;
	}
	Fraction(const Fraction& obj) {
		this->denominator = obj.denominator;
		this->numerator = obj.numerator;

	}
	Fraction normalize();
	int getDenominator() const;
	int getNumerator() const;
	std::string getValue();
	Fraction operator+(const Fraction& obj);
	Fraction operator-(const Fraction& obj);
	Fraction operator*(const Fraction& obj);
	Fraction operator/(const Fraction& obj);
	Fraction operator=(const Fraction& obj);
 private:
	int numerator;
	int denominator;
};

#endif  // INCLUDE_FRACTION_H_
