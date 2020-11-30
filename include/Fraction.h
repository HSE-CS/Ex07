//Copyright 2020 Igumnova Natasha
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>
#include <string>

class Fraction
{
private:
  int numerator, denominator;
public:
  explicit Fraction(int num = 0, int den = 1)
  {
    this->numerator = num;
	this->denominator = den;
  };
  Fraction(const Fraction& f)
  {
	this->numerator = f.numerator;
	this->denominator = f.denominator;
  };
  Fraction normalize();
  std::string getValue();
  int getNumerator() const;
  int getDenominator() const;
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);
  Fraction operator=(const Fraction&);
};
int NOD(int, int);
#endif //INCLUDE_FRACTION_