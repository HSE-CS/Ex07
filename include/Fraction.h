// Copyright 2020 Ozhiganova Polina
#ifndef KPO__FRACTION_H_
#define KPO__FRACTION_H_

#include <string>

int find_nod(int numer, int denom);

class Fraction {
 public:
  explicit Fraction(int numerator = 0,
                    int denominator = 1); //конструктор с двумя параметрами, со значениями по-умолчанию (0,1).
  Fraction(const Fraction &new_fr); //  конструктор копирования.
  std::string getValue();
  int getNumerator() const;
  int getDenominator() const;
  Fraction operator+(const Fraction &);
  Fraction operator-(const Fraction &);
  Fraction operator*(const Fraction &);
  Fraction operator/(const Fraction &);
  Fraction operator=(const Fraction &);
 private:
  int numerator;
  int denominator;

  Fraction normalize(); // сокращения дроби 2/4 -> 1/2
};

#endif //KPO__FRACTION_H_