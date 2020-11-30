#include "Fraction.h"
static int gcd(int a, int b) {
	if (a < b) std::swap(a, b);
	while (b) {
		a %= b;
		std::swap(a, b);
	}
	return a;
}
void Fraction::normalize() {
	int c = gcd(numerator, denominator);
	numerator /= c;
	denominator /= c;
}
Fraction::Fraction(int num , int den) :numerator(num), denominator(den) {
	if (den == 0) throw "invalid denominator";
	normalize();
}
Fraction::Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}
std::string Fraction::getValue() {
	std::string tmp;
	if (denominator == 1) return tmp = numerator;
	else return	tmp = std::to_string(numerator) + "/" + std::to_string(denominator);
}
int Fraction::getNumerator() {
	return numerator;
}
int Fraction::getDenominator() {
	return denominator;
}
Fraction Fraction::operator+(const Fraction& fr) {
	return Fraction(numerator * fr.denominator + fr.numerator * denominator, denominator * fr.denominator);	
}
Fraction Fraction::operator-(const Fraction& fr) {
	return Fraction(numerator * fr.denominator - fr.numerator * denominator, denominator*fr.denominator);
}
Fraction Fraction::operator*(const Fraction& fr) {
	return Fraction(numerator * fr.numerator, denominator * fr.denominator);
}
Fraction Fraction::operator/(const Fraction& fr) {
	return Fraction(numerator * fr.denominator, denominator * fr.numerator);
}
Fraction Fraction::operator=(const Fraction& fr) {
	return Fraction(numerator = fr.numerator, denominator = fr.denominator);
}
