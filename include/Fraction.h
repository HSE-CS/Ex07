// Copyright 2020 ArinaMonicheva
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
 private:
  int numerator;
  int denominator;
  void normalize(); // cuts the fraction
  int GCD(int tempNum, int tempDen);
  std::string convertToStr(int number); // because itoa is unknown to online compiler
  // creating the function for transition both of fractions to the same denominatior is useless
  // due to impossibility to return both of them

 public:
  Fraction(int newNum, int newDen); // - конструктор с двумя параметрами, со значениями по умолчанию(0, 1)
  Fraction();
  Fraction(const Fraction& otherFraction); //конструктор копирования.
  std::string getValue(); // -метод, возвращающий строку типа std::string, содержащую изображение дроби
  int getNumerator(); // -вернуть числитель.
  int getDenominator(); // -вернуть знаменатель.
  Fraction operator+(const Fraction& otherFraction); //-сложение
  Fraction operator-(const Fraction& otherFraction); //-вычитание
  Fraction operator*(const Fraction& otherFraction); //-умножение
  Fraction operator/(const Fraction& otherFraction); //-деление
  Fraction operator=(const Fraction& otherFraction);
};

#endif  // INCLUDE_FRACTION_H_