// Copyright 2020 Longa Bonga
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

class Fraction {
 private:
   int numerator, denominator;
 public:
   explicit Fraction();
   explicit Fraction(int a, int b);
   Fraction(Fraction &a);
   void normalize();
   std::string getValue();
   int getNumerator();
   int getDenominator();
   Fraction operator+(const Fraction& b);
   Fraction operator-(const Fraction& b);
   Fraction operator*(const Fraction& b);
   Fraction operator/(const Fraction& b);
};

#endif // INCLUDE_FRACTION_H_
