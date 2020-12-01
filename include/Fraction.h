// Copyright 2020 GHA Test Team
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <iostream>


class Fraction {
 private:
   int numerator, denominator;
   void normalize();
   void check_minus();
   void check_denominator();
 public:
	 Fraction(int = 0, int = 1);
	 Fraction(Fraction&);
	 Fraction& operator=(const Fraction&);
	 Fraction operator+(const Fraction&);
	 Fraction operator-(const Fraction&);
	 Fraction operator*(const Fraction&);
	 Fraction operator/(const Fraction&);
	 std::string getValue() const;
	 int getNumerator() const;
	 int getDenominator() const;
};

#endif  // INCLUDE_FRACTION_H_
