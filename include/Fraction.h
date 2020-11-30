// Copyright 2020 Ex07 TiNa
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
	 int numerator;
	 int denominator;
	 void normalize();
 public:
	 //Fraction();
	 explicit Fraction(int num = 0, int den = 1);
	 Fraction(const Fraction& a);
	 std::string getValue();
	 int getNumerator();
	 int getDenominator();
	 Fraction operator+(const Fraction& op);
	 Fraction operator-(const Fraction& op);
	 Fraction operator*(const Fraction& op);
	 Fraction operator/(const Fraction& op);
};


#endif // INCLUDE_FRACTION_H_
