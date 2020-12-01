#include <string>
#include <iostream>
#include <cmath>
#include "Fraction.h"

using namespace std;

int Fraction::getDenominator()
{
	return this->denominator;
}

int Fraction::getNumerator()
{
	return this->numerator;
}

int GCD(int a, int b)
{
	if (a % b == 0){
		return b;
	}
	if (b % a == 0) {
		return a;
	}

	if (a > b)
		return GCD(a % b, b);
	return GCD(a, b % a);
}


string Fraction::getValue() {
	string numer;
	numer = to_string(numerator);
	
	if (numerator == 0) {
		return numer;
	}

	string denom = to_string(denominator);
	string val = numer + "/" + denom;
	
	return val;
}

void Fraction::normalize() 
{
	int divisor = GCD(abs(numerator), abs(denominator));
	
	numerator = numerator / divisor;
	denominator = denominator / divisor;
}

Fraction::Fraction(int numer, int denom)
{
	if (denom != 0) {
		this->numerator = numer;
		this->denominator = denom;

		this->normalize();
	}
	
}

Fraction::Fraction(const Fraction& frac)
{
	this->numerator = frac.numerator;
	this->denominator = frac.denominator;
	this->normalize();
}

Fraction Fraction::operator+(const Fraction& frac)
{
	return Fraction(frac.denominator * numerator + frac.numerator * denominator,
		denominator * frac.denominator);
}

Fraction Fraction::operator*(const Fraction& frac)
{
	return Fraction(numerator * frac.numerator, 
		denominator * frac.denominator);
}

Fraction Fraction::operator/(const Fraction& frac) 
{
	return Fraction(numerator * frac.denominator, 
		denominator * frac.numerator);
}

Fraction Fraction::operator=(const Fraction& frac) {
	numerator = frac.numerator;
	denominator = frac.denominator;

	return *this;

}

Fraction Fraction::operator-(const Fraction& frac) 
{
	return Fraction(numerator * frac.denominator - frac.numerator * denominator,
		denominator * frac.denominator);
}