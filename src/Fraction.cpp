// Copyright 2020 test
#include "../include/Fraction.h"
//#include "Fraction.h"

void Fraction::normalize() {
	if (this->numerator == 0) {
		return;
	} else {
		if (numerator < 0 && denominator < 0) {
			numerator *= -1;
			denominator *= -1;
		}
		for (int iterator = 1; iterator <= std::min( abs(numerator), abs(denominator)); ++iterator) {
			if (numerator % iterator == 0 && denominator % iterator == 0) {
				numerator /= iterator;
				denominator /= iterator;
			}
		}
	}
	return;
}

Fraction::Fraction(int numerator, int denominator) {
	if (denominator == 0) {
		throw - 1;
	}
	this->numerator = numerator;
	this->denominator = denominator;
	normalize();
}

Fraction::Fraction(Fraction& toCopy) {
	this->numerator = toCopy.numerator;
	this->denominator = toCopy.denominator;
	normalize();
}

std::string Fraction::getValue() {
	if (this->denominator == 1 || this->numerator == 0) {
		return std::to_string(this->numerator);
	}
	return std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
}

int Fraction::getNumerator() {
	return this->numerator;
}

int Fraction::getDenominator() {
	return denominator;
}