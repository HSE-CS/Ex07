//Copyright 2020 Elizaveta Drobot
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>

class Fraction
{
private:
	int numerator;
	int denominator;
	void normalize();
public:
	Fraction(int a = 0, int b = 1);

	Fraction(Fraction&);

	std::string getValue();

	int getNumerator();

	int getDenominator();

	Fraction& operator= (const Fraction& a) {
		this->numerator = a.numerator;
		this->denominator = a.denominator;
		if (this->denominator == 0) {
			throw - 1;
		}
		return *this;
	}

	Fraction operator+ (const Fraction& a) {
		Fraction result;
		if (this->denominator == a.denominator) {
			result.numerator = this->numerator + a.numerator;
			result.denominator = this->denominator;
		}
		else {
			Fraction c;
			Fraction d;
			c.numerator = this->numerator * a.denominator;
			c.denominator = this->denominator * a.denominator;
			d.denominator = c.denominator;
			d.numerator = a.numerator * this->denominator;
			result.numerator = c.numerator + d.numerator;
			result.denominator = c.denominator;
		}
		if (result.denominator == 0) {
			throw - 1;
		}
		normalize();
		return result;
	}

	Fraction operator- (const Fraction& a) {
		Fraction result;
		if (this->denominator == a.denominator) {
			result.numerator = this->numerator - a.numerator;
			result.denominator = this->denominator;
		}
		else {
			Fraction c;
			Fraction d;
			c.numerator = this->numerator * a.denominator;
			c.denominator = this->denominator * a.denominator;
			d.denominator = c.denominator;
			d.numerator = a.numerator * this->denominator;
			result.numerator = c.numerator - d.numerator;
			result.denominator = c.denominator;
		}
		if (result.denominator == 0) {
			throw - 1;
		}
		normalize();
		return result;
	}

	Fraction operator* (const Fraction& a) {
		Fraction result;
		result.numerator = this->numerator * a.numerator;
		result.denominator = this->denominator * a.denominator;
		if (result.denominator == 0) {
			throw - 1;
		}
		return result;
	}

	Fraction operator/ (const Fraction& a) {
		Fraction result;
		result.numerator = this->numerator * a.denominator;
		result.denominator = this->denominator * a.numerator;
		if (result.denominator == 0) {
			throw - 1;
		}
		return result;
	}
};
#endif