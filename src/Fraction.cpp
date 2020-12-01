// Copyright 2020 GHA Test Team
#include "Fraction.h"
#include <string>


void Fraction::check_minus() {
	if (denominator < 0 && numerator < 0 || denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
}

void Fraction::check_denominator() {
	try {
		if (denominator == 0)
			throw -1;
	}
	catch (int) {
		std::cerr << "the denominator is zero" << std::endl;
		exit(-1);
	}
}

Fraction::Fraction(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
	check_denominator();
	check_minus();
	normalize();
}

Fraction::Fraction(Fraction& f) : numerator(f.numerator),
denominator(f.denominator) {
	check_minus();
	check_denominator();
	normalize();
}

void Fraction::normalize() {
	bool sign = false;
	if (numerator < 0) {
		sign = true;
		numerator *= -1;
	}
	for (int i = 1; i <= numerator && i <= denominator; i++) {
		if (numerator % i == 0 && denominator % i == 0) {
			numerator /= i;
			denominator /= i;
		}
	}
	if (sign)
		numerator *= -1;
}

std::string Fraction::getValue() const {
	std::string result = "";
	result += std::to_string(numerator);
	result += '/';
	result += std::to_string(denominator);
	return result;
}

int Fraction::getNumerator() const {
	return numerator;
}

int Fraction::getDenominator() const {
	return denominator;
}

Fraction& Fraction::operator=(const Fraction& f) {
	numerator = f.numerator;
	denominator = f.denominator;
	return *this;
}

Fraction Fraction::operator+(const Fraction& f) {
	Fraction temp;
	int num1(numerator), num2(f.numerator);
	int denum1(denominator), denum2(f.denominator);
	if (denum1 != denum2) {
		num1 *= denum2;
		num2 *= denum1;
		denum2 = denum1 *= denum2;
	}
	temp.numerator = num1 + num2;
	temp.denominator = denum1;
	temp.normalize();
	return temp;
}

Fraction Fraction::operator-(const Fraction& f) {
	Fraction temp;
	int num1(numerator), num2(f.numerator);
	int denum1(denominator), denum2(f.denominator);
	if (denum1 != denum2) {
		num1 *= denum2;
		num2 *= denum1;
		denum2 = denum1 *= denum2;
	}
	temp.numerator = num1 - num2;
	temp.denominator = denum1;
	temp.normalize();
	return temp;
}

Fraction Fraction::operator*(const Fraction& f) {
	Fraction temp;
	temp.numerator = numerator * f.numerator;
	temp.denominator = denominator * f.denominator;
	temp.normalize();
	return temp;
}

Fraction Fraction::operator/(const Fraction& f) {
	Fraction temp;
	temp.numerator = numerator * f.denominator;
	temp.denominator = denominator * f.numerator;
	temp.check_denominator();
	temp.normalize();
	return temp;
}
