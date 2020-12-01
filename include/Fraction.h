// Copyright 2020 Dev-will-work
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>
class Fraction {
 public:
  Fraction(); // -конструктор с двумя параметрами, со значениями по - умолчанию(0, 1).
  Fraction(); // -конструктор копирования.
  void normalize(); // -закрытый метод нормировки(сокращения дроби 2 / 4 -> 1 / 2).
  std::string getValue(); // -метод, возвращающий std::string, содержащую изображение дроби, например "-5/6".Дробь с единичным знаменателем выводится как целое число.
  int getNumerator(); // -вернуть числитель.
  int getDenominator(); // -вернуть знаменатель.
 private:
   int numerator = 0, denominator = 1;
};
#endif  // INCLUDE_FRACTION_H_
