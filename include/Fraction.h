// Copyright 2020 Pasmanik Irina
#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <string>

class Fraction {
 private:
    int numerator;
    int denominator;

 public:
	explicit Fraction(int a = 0, int b = 1);
	Fraction(const Fraction&);

	void normalize();	// закрытый метод сокращения дроби
	std::string getValue();	// метод, возвращающий изображение дроби
	int getNumerator();		// вернуть числитель
	int getDenominator();	// вернуть знаменатель

	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	Fraction& operator=(const Fraction&);
};

#endif // FRACTION_H