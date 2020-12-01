// Copyright 30.11.20 DenisKabanov

#include "Fraction.h"

void Fraction::normalize() {
	for (int i = this->numerator; i > 0; i--) {
		if ((this->numerator % i == 0) && (this->denominator % i == 0)) {
			this->numerator = this->numerator / i;
			this->denominator = this->denominator / i;
			break;
		}
	}
}

Fraction::Fraction(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
	if (this->denominator == 0) {
		throw "Denominator cannot be zero.";
	}
	else {
		normalize();
	}
}

Fraction::Fraction(const Fraction& fraction) {
	this->numerator = fraction.numerator;
	this->denominator = fraction.denominator;
}

int Fraction::getNumerator() const{
	return this->numerator;
}

int Fraction::getDenominator() const {
	return this->denominator;
}

std::string Fraction::getValue() const {
	std::string fraction;
	if (getDenominator() != 1) {
		fraction = std::to_string(getNumerator()) + "/" + std::to_string(getDenominator());
	}
	else {
		fraction = std::to_string(getNumerator());
	}
	return fraction;
}

// in return: create an element of the fraction class

Fraction Fraction::operator+(const Fraction& fraction) {
	return Fraction(numerator * fraction.denominator + fraction.numerator * denominator, denominator * fraction.denominator);
}

Fraction Fraction::operator-(const Fraction& fraction) {
	return Fraction(numerator * fraction.denominator - fraction.numerator * denominator, denominator * fraction.denominator);
}

Fraction Fraction::operator*(const Fraction& fraction) {
	return Fraction(numerator * fraction.numerator, denominator * fraction.denominator);
}

Fraction Fraction::operator/(const Fraction& fraction) {
	return Fraction(numerator * fraction.denominator, denominator * fraction.numerator);
}

Fraction Fraction::operator=(const Fraction& fraction) {
	numerator = fraction.numerator;
	denominator = fraction.denominator;
	return Fraction(numerator, denominator);
}
