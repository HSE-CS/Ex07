// Copyright 2020 Pasmanik Irina
#include "Fraction.h"

void Fraction::normalize() {
	//TODO
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
	//TODO
}

Fraction Fraction::operator-(const Fraction&fr) {
	//TODO
}

Fraction Fraction::operator*(const Fraction&fr) {
	//TODO
}

Fraction Fraction::operator/(const Fraction&fr) {
	//TODO
}

Fraction& Fraction::operator=(const Fraction&fr) {
	//TODO
}
