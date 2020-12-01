#include "Fraction.h"

#include <stdexcept>

int gcd(int a, int b)
{
	while (a > 0 && b > 0)
		a > b ? a = a % b : b = b % a;
	return a + b;
}

void Fraction::normalize()
{
	int div = gcd(numerator, denominator);
	numerator /= div;
	denominator /= div;
}

Fraction::Fraction(int n, int d) : numerator{ n }, denominator{ d } 
{
	if (d == 0)
		throw std::runtime_error("Division by zero");
	normalize();
}

Fraction::Fraction(const Fraction& fr) 
	: numerator(fr.numerator), denominator(fr.denominator) {}

std::string Fraction::getValue() const
{
	std::string s;
	s += std::to_string(numerator);
	if (denominator != 1)
	{
		s += '/';
		s += std::to_string(denominator);
	}
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

Fraction Fraction::operator+(const Fraction& fr)
{
	return Fraction{ numerator * fr.denominator + fr.numerator * denominator,
					 fr.denominator * denominator };
}

Fraction Fraction::operator-(const Fraction& fr)
{
	return Fraction{ numerator * fr.denominator - fr.numerator * denominator,
					 fr.denominator * denominator };
}

Fraction Fraction::operator*(const Fraction& fr)
{
	return Fraction{ numerator * fr.numerator,
					 fr.denominator * denominator };
}

Fraction Fraction::operator/(const Fraction& fr)
{
	return Fraction{ numerator * fr.denominator,
					 fr.numerator * denominator };
}

Fraction& Fraction::operator=(const Fraction& fr) 
{
	numerator = fr.numerator;
	denominator = fr.denominator;
	return *this;
}
