// Copyright 2020 Bugrov

#include "Fraction.h"

void Fraction::normalize() {
	int min = 0;
	if (abs(numerator) < abs(denominator)) {
		min = abs(numerator);
	}
	else {
		min = abs(denominator);
	}
	int gcd = 1;
	for (int i = 1; i <= min; ++i) {
		if ((numerator % i == 0) && (denominator % i == 0) && (i > gcd)) {
			gcd = i;
		}
	}
	numerator /= gcd;
	denominator /= gcd;
}

Fraction::Fraction(int num, int den) {
	if (den == 0) {
		throw "Div by zero";
	}
	else
		if (num == 0) {
			numerator = num;
			denominator = 1;
		}
		else {
			numerator = num;
			denominator = den;
		}
	this->normalize();
}

Fraction::Fraction(const Fraction &frac) {
	numerator = frac.numerator;
	denominator = frac.denominator;
}

std::string Fraction::getValue() {
	if (denominator == 1) {
		return std::to_string(numerator);
	}
	else {
		return std::to_string(numerator) + "/" + std::to_string(denominator);
	}
}

int Fraction::getNumerator() {
	return numerator;
}

int Fraction::getDenominator() {
	return denominator;
}

Fraction Fraction::operator+(const Fraction &frac) {
	Fraction fr(frac.denominator * numerator +
		denominator * frac.numerator,
		denominator * frac.denominator);
	return fr;
}

Fraction Fraction::operator-(const Fraction &frac) {
	Fraction fr(frac.denominator * numerator -
		denominator * frac.numerator,
		denominator * frac.denominator);
	return fr;
}

Fraction Fraction::operator*(const Fraction &frac) {
	return Fraction(numerator * frac.numerator, denominator * frac.denominator);
}
Fraction Fraction::operator/(const Fraction &frac) {
	return Fraction(numerator * frac.denominator, denominator * frac.numerator);
}
Fraction & Fraction::operator=(const Fraction &frac) {
	numerator = frac.numerator;
	denominator = frac.denominator;
	return *this;
}