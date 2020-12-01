//Copyright 2020 Uskova
#ifndef INCLUDE_FRACTION_H_
#define  INCLUDE_FRACTION_H_

#include <string>

int Nod(int a, int b);

class Fraction {
 private:
	 int numerator;       //числитель
	 int denominator;
	 Fraction normalize();
 public:
	 explicit Fraction(int numerat = 0, int denominat = 1);
	 Fraction(const Fraction& new_frac);
	 std::string getValue();
	 int getNumerator();
	 int getDenominator();
	 Fraction operator+(const Fraction&);
	 Fraction operator-(const Fraction&);
	 Fraction operator*(const Fraction&);
	 Fraction operator/(const Fraction&);
	 Fraction operator=(const Fraction&);
};

#endif
