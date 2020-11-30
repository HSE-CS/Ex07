// Copyright 2020 GN
#include "Fraction.h"
Fraction::Fraction(int num, int denom) {
	//std::cout << "ok";
	if (denom == 0) {
		throw "Div by zero";
	}
	else {
		numerator = num;
		denominator = denom;
	}
	this->normalize();
	//std::cout << "ok1";
}
Fraction::Fraction(const Fraction& fr) {
	numerator = fr.numerator;
	denominator = fr.denominator;
}
void Fraction::normalize() {
	int min = 0;
	if (abs(numerator) < abs(denominator)) {
		min = abs(numerator);
	}
	else {
		min = abs(denominator);
	}
	//std::cout << "\n" << min << "\n";
	int gcd = 1;
	for (int i = 1; i <= min; ++i) {
		/*::cout<< numerator % i <<"\n";
		std::cout<< denominator % i <<"\n";
		std::cout<<i<<"\n";*/
		if ((numerator % i == 0) && (denominator % i == 0) && (i > gcd)) {
			gcd = i;
		}
	}
	//std::cout<<"\n" << gcd << "\n";
	numerator /= gcd;
	denominator /= gcd;
}
/*void Fraction::normalize() {
	int min = 0;
	if (numerator < denominator) {
		min = numerator;
	}
	else {
		min = denominator;
	}
	int max = 1;
	for (int i = 0; i < min; ++i) {
		if ((numerator / i == 0) && (denominator / i == 0) && (i>max)) {
			max = i;
		}
	}
	numerator = int(numerator / max);
	denominator = int(denominator / max);
}*/
std::string Fraction::getValue() {
	std::string str;
	str += std::to_string(numerator);
	str += '/';
	str += std::to_string(denominator);
	return str;
}
int Fraction::getNumerator() {
	return numerator;
}
int Fraction::getDenominator() {
	return denominator;
}
Fraction Fraction::operator+(const Fraction& fr){
	return Fraction(numerator * fr.denominator + fr.numerator * denominator, denominator * fr.denominator);
}
Fraction Fraction::operator-(const Fraction& fr) {
	return Fraction(numerator * fr.denominator - fr.numerator * denominator, denominator * fr.denominator);
}
Fraction Fraction::operator*(const Fraction& fr) {
	return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}
Fraction Fraction::operator/(const Fraction& fr) {
	return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}
Fraction Fraction::operator=(const Fraction& fr) {
	numerator = fr.numerator;
	denominator = fr.denominator;
	return *this;
}