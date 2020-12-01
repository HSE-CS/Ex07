// Copyright 2020 Dev-will-work
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>
class Fraction {
 private:
  int numerator = 0, denominator = 1;
  void normalize(); // закрытый метод нормировки
  //(сокращения дроби 2 / 4 -> 1 / 2).
  int GCD(int one, int two);
  int LCM(int one, int two);

 public:
  Fraction(int numerator = 0, int denominator = 1);
  Fraction(const Fraction& from) : numerator{ from.numerator },
  denominator{ from.denominator } {};
  std::string getValue(); // -метод, возвращающий std::string, содержащую 
  //изображение дроби, например "-5/6".Дробь с единичным знаменателем выводится 
  //как целое число.
  int getNumerator();
  int getDenominator();
  Fraction operator+(const Fraction& second);
  Fraction operator-(const Fraction& second);
  Fraction operator*(const Fraction& second);
  Fraction operator/(const Fraction& second);
  Fraction& operator=(const Fraction& second);
};
#endif  // INCLUDE_FRACTION_H_
