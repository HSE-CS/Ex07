// Copyright 2020 Pasmanik Irina
#pragma once
#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

#include <iostream>
#include <string>

class Fraction {
private:
	int numerator;
	int denominator;

public:
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

//Fraction(..) - конструктор с двумя параметрами, со значениями по - умолчанию(0, 1).
//Fraction(..) - конструктор копирования.

#endif // FRACTION_H_INCLUDED