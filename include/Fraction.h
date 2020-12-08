  // Copyright by GHA test team

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
	int numerator, denominator;
	void normalize();
 public:
	 explicit Fraction(int = 0, int = 1);
	 Fraction(const Fraction &fraction);
	 std::string getValue();
	 int getNumerator();
	 int getDenominator();
	 Fraction operator+(const Fraction &fraction);  //check using references
	 Fraction operator-(const Fraction &fraction);
	 Fraction operator*(const Fraction &fraction);
	 Fraction operator/(const Fraction &fraction);
	 Fraction &operator=(const Fraction &fraction);
};
#endif  // INCLUDE_FRACTION_H_
