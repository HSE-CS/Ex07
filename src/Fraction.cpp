// Copyright 2020 Alexander Shirokov

#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int a, int b)
{
	numerator = a;
	denominator = b;
		if (denominator == 0)
			throw runtime_error("Division by zero");
	normalize();
}

Fraction::Fraction(const Fraction& f)
{
	numerator = f.numerator;
	denominator = f.denominator;
}

int NOD(int a, int b)
{
	while (a > 0 && b > 0)
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	return a + b;
}

void Fraction::normalize()
{
	int nod = NOD(numerator, denominator);
	numerator /= nod;
	denominator /= nod;
}

string Fraction::getValue()
{
	string s = "";
	s = to_string(numerator) + "/" + to_string(denominator);
	return s;
}

int Fraction::getNumerator() const
{
	return numerator;
}

int Fraction::getDenominator() const
{
	return denominator;
}

Fraction Fraction::operator+(const Fraction& f)
{
	int num, den;
	num = numerator * f.getDenominator() + f.getNumerator() * denominator;
	den = denominator * f.getDenominator();
	return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& f)
{
	int num, den;
	num = numerator * f.getDenominator() - f.getNumerator() * denominator;
	den = denominator * f.getDenominator();
	return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& f)
{
	int num, den;
	num = numerator * f.getNumerator();
	den = denominator * f.getDenominator();
	return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& f)
{
	int num, den;
	num = numerator * f.getDenominator();
	den = denominator * f.getNumerator();
	return Fraction(num, den);
}

Fraction& Fraction::operator=(const Fraction& fr) {
	numerator = fr.numerator;
	denominator = fr.denominator;
	return *this;
}
