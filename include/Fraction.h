// Copyright 2020 ArinaMonicheva
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator;
  int denominator;
  void normalize(); //  cuts the fraction
  int GCD(int tempNum, int tempDen);
  std::string convertToStr(int number); 
  // ^ because itoa is unknown to online compiler
  //  creating the function for transition both 
  //  of fractions to the same denominatior is useless
  //  due to impossibility to return both of them

 public:
  Fraction(int newNum, int newDen);
  Fraction();
  Fraction(const Fraction& otherFraction);
  std::string getValue();
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction& otherFraction);
  Fraction operator-(const Fraction& otherFraction);
  Fraction operator*(const Fraction& otherFraction);
  Fraction operator/(const Fraction& otherFraction);
  Fraction operator=(const Fraction& otherFraction);
};

#endif  //  INCLUDE_FRACTION_H_
