// Copyright 30.11.20 DenisKabanov

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>

class Fraction {
 private:
	 int numerator;
	 int denominator;
	 void normalize();
 public:
	 explicit Fraction(int numerator = 0, int denominator = 1);// constructor with two parameters
	 Fraction(const Fraction &fraction);// copy constructor
	 int getNumerator() const;// numerator return function
	 int getDenominator() const;// denumerator return function
	 std::string getValue() const;// fraction return function
	 Fraction operator+(const Fraction& fraction);// overload +
	 Fraction operator-(const Fraction& fraction);// overload -
	 Fraction operator*(const Fraction& fraction);// overload *
	 Fraction operator/(const Fraction& fraction);// overload /
	 Fraction operator=(const Fraction& fraction);// overload =
};

#endif // INCLUDE_FRACTION_H_
