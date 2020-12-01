// Copyright 2020 Pasmanik Irina
#include "Fraction.h"

Fraction::Fraction(int a, int b) {
	if (b == 0) {
		throw "zero denom";
	}
	else if (a == 0) {
		numerator = a;
		denominator = 1;
	}
	else {
		numerator = a;
		denominator = b;
	}
	this->normalize();
}

Fraction::Fraction(const Fraction& fr) {
	numerator = fr.numerator;
	denominator = fr.denominator;
}

void Fraction::normalize() {
	int min = 0;
	if (abs(numerator) <= abs(denominator)) {
		min = numerator;
	}
	else {
		min = denominator;
	}

	int n = 1;
	for (int i = 1; i <= min; ++i) {
		if ((numerator % i == 0) && (denominator % i == 0) && (i > n)) {
			n = i;
		}
	}
	numerator /= n;
	denominator /= n;
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

Fraction Fraction::operator+(const Fraction&fr) {
	int num = fr.denominator * numerator + fr.numerator * denominator;
	int den = denominator * fr.denominator;
	Fraction res(num, den);
	return res;
}

Fraction Fraction::operator-(const Fraction&fr) {
	int num = fr.denominator * numerator - fr.numerator * denominator;
	int den = denominator * fr.denominator;
	Fraction res(num, den);
	return res;
}

Fraction Fraction::operator*(const Fraction&fr) {
	int num = fr.numerator * numerator;
	int den = denominator * fr.denominator;
	Fraction res(num, den);
	return res;
}

Fraction Fraction::operator/(const Fraction&fr) {
	int num = fr.numerator * denominator;
	int den = fr.denominator * numerator;
	Fraction res(num, den);
	return res;
}

Fraction& Fraction::operator=(const Fraction&fr) {
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
	normalize();
	return *this;
}
