//Copyrigth 2020 Lukicheva Polina
#include "Fraction.h"

int NOD(int num, int den) {
	num = abs(num);
	den = abs(den);
	while (num * den != 0) {
		if (num > den)
			num -= den;
		else
			den -= num;
	}
	return den + num;
}

Fraction Fraction::normalize() {
	int nod = NOD(this->numerator, this->denumerator);
	this->numerator = this->numerator / nod;
	this->denumerator = this->denumerator / nod;
	return *this;
}

Fraction::Fraction(int numerator, int denumerator) {
	if (denumerator == 0)
		throw "Division by zero";
	this->numerator = numerator;
	this->denumerator = denumerator;
}

Fraction::Fraction(const Fraction& fr) {
	this->numerator = fr.numerator;
	this->denumerator = fr.denumerator;
}

std::string Fraction::getValue() {
	if (this->denumerator == 1)
		return std::to_string(numerator);
	return std::to_string(numerator) + "/" + std::to_string(denumerator);
}

int Fraction::getNumerator() {
	return this->numerator;
}

int Fraction::getDenumerator() {
	return this->denumerator;
}

Fraction Fraction::operator+(Fraction& fr) {

	return Fraction(this->numerator * fr.denumerator + fr.numerator * this->denumerator, this->denumerator * fr.denumerator).normalize();
}

Fraction Fraction::operator-(Fraction& fr) {
	return Fraction(this->numerator * fr.denumerator - fr.numerator * this->denumerator, this->denumerator * fr.denumerator).normalize();
}

Fraction Fraction::operator*(Fraction& fr) {
	return Fraction(this->numerator * fr.numerator, this->denumerator * fr.denumerator).normalize();
}

Fraction Fraction::operator/(Fraction& fr) {
	return Fraction(this->numerator * fr.numerator, this->denumerator / fr.denumerator).normalize();
}

Fraction Fraction::operator=(Fraction& fr)
{
	return Fraction(this->numerator = fr.numerator, this->denumerator = fr.denumerator);
}