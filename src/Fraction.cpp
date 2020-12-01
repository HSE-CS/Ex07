// Copyright 2020 Dev-will-work
#include "Fraction.h"
Fraction::Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  if (denominator == 0) this->denominator = 1;
	else this->denominator = denominator;
	if (this->numerator == 0) this->denominator = 1;
	this->normalize();
}// -конструктор с двумя параметрами, со значениями по - умолчанию(0, 1).

void Fraction::normalize() {
	if (this->numerator <= 0) return;
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

int Fraction::LCM(int one, int two) {
	return one * two / GCD(one, two);
}

std::string Fraction::getValue() {
	if (this->denominator == 1 || this->numerator == 0) 
		return std::to_string(this->numerator);
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

Fraction Fraction::operator+(const Fraction& second) {
	Fraction res;
	int multiplier1 = 0, multiplier2 = 0;
	if (this->denominator == second.denominator) {
		res.numerator = this->numerator + second.numerator;
		res.denominator = this->denominator;
	} else {
		res.denominator = LCM(this->denominator, second.denominator);
		multiplier1 = res.denominator / this->denominator;
		multiplier2 = res.denominator / second.denominator;
		res.numerator = this->numerator * multiplier1 +
			second.numerator * multiplier2;
	}
	if (res.numerator == 0) res.denominator = 1;
	res.normalize();
	return res;
}

Fraction Fraction::operator-(const Fraction& second) {
	Fraction res;
	int multiplier1 = 0, multiplier2 = 0;
	if (this->denominator == second.denominator) {
		res.numerator = this->numerator - second.numerator;
		res.denominator = this->denominator;
	} else {
		res.denominator = LCM(this->denominator, second.denominator);
		multiplier1 = res.denominator / this->denominator;
		multiplier2 = res.denominator / second.denominator;
		res.numerator = this->numerator * multiplier1 -
			second.numerator * multiplier2;
	}
	if (res.numerator == 0) res.denominator = 1;
	res.normalize();
	return res;
}

Fraction Fraction::operator*(const Fraction& second) {
	Fraction res;
	res.numerator = this->numerator * second.numerator;
	res.denominator = this->denominator * second.denominator;
	if (res.numerator == 0) res.denominator = 1;
	res.normalize();
	return res;
}

Fraction Fraction::operator/(const Fraction& second) {
	if (second.numerator == 0) throw "division by zero!";
	Fraction reverse(second.denominator, second.numerator);
	Fraction res = *this * reverse;
	if (res.numerator == 0) res.denominator = 1;
	res.normalize();
	return res;
}

Fraction& Fraction::operator=(const Fraction& second) {
	this->numerator = second.numerator;
	this->denominator = second.denominator;
	return *this;
}
