  // Copyright by GHA test team

#include "Fraction.h"
#include <string>
#include <cmath>

int gcd(int a, int b) {
	while (a && b) {
		if (a >= b)
			a %= b;
		else
			b %= a;
	}
	return a | b;
}

Fraction::Fraction(int num, int denom) {
	if (!denom)
		throw "Denominator is 0!";
	numerator = num;
	denominator = denom;
	this->normalize();
}

Fraction::Fraction(const Fraction &fraction) :
	numerator(fraction.numerator), denominator(fraction.denominator) {
}

std::string Fraction::getValue() {
	if (denominator == 1)
		return std::to_string(numerator);
	return std::to_string(numerator) + "/" + std::to_string(denominator);
}

void Fraction::normalize() {
	int nod = gcd(abs(numerator), abs(denominator));
	numerator /= nod;
	denominator /= nod;
}

int Fraction::getNumerator() {
	return numerator;
}

int Fraction::getDenominator() {
	return denominator;
}

Fraction Fraction::operator+(const Fraction &f) {
	return Fraction(numerator * f.denominator + f.numerator * denominator,
	 denominator * f.denominator);
}

Fraction Fraction::operator-(const Fraction &f) {
	return Fraction(numerator * f.denominator - f.numerator * denominator,
	 denominator * f.denominator);
}

Fraction Fraction::operator*(const Fraction &f) {
	return Fraction(numerator * f.numerator,
	 denominator * f.denominator);
}

Fraction Fraction::operator/(const Fraction &f) {
	return Fraction(numerator * f.denominator,
	 denominator * f.numerator);
}

Fraction &Fraction::operator=(const Fraction &f) {
	numerator = f.numerator;
	denominator = f.denominator;
	return *this;
}
