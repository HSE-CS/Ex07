#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>
class Fraction {
private:
	int numerator;
	int denominator;
	void normalize();

public:
	std::string getValue();
	int getNumerator();
	int getDenominator();
	explicit Fraction(int = 0, int = 1);
	Fraction(const Fraction& fraction);
	Fraction operator+(const Fraction& fraction);
	Fraction operator-(const Fraction& fraction);
	Fraction operator*(const Fraction& fraction);
	Fraction operator/(const Fraction& fraction);
	Fraction operator=(const Fraction& fraction);

};
#endif
#endif