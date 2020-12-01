// Copyright 2020 Dev-will-work
#include "Fraction.h"
Fraction::Fraction(int numerator = 0, int denominator = 1) {
  this->numerator = numerator;
  this->denominator = denominator;
}// -конструктор с двумя параметрами, со значениями по - умолчанию(0, 1).

void Fraction::normalize() {
	int greatest_comm_divizor = GCD(this->numerator, this->denominator);
	this->numerator /= greatest_comm_divizor;
	this->denominator /= greatest_comm_divizor;
}// -закрытый метод нормировки(сокращения дроби 2 / 4 -> 1 / 2).

int Fraction::GCD(int one, int two) {
	while (one != two) {
		if (one > two) one -= two;
		else two -= one;
	}
	return one;
}

std::string Fraction::getValue() {
	if (this->denominator == 1) return std::to_string(this->numerator);
	else return std::to_string(this->numerator) +=
		std::string("/") += 
		std::to_string(this->denominator);
}// -метод, возвращающий std::string, содержащую изображение дроби, например "-5/6".Дробь с единичным знаменателем выводится как целое число.

int Fraction::getNumerator() {
  return this->numerator;
}// -вернуть числитель.

int Fraction::getDenominator() {
  return this->denominator;
}// -вернуть знаменатель.
