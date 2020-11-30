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
	void normalize();	// �������� ����� ���������� �����
	std::string getValue();	// �����, ������������ ����������� �����
	int getNumerator();		// ������� ���������
	int getDenominator();	// ������� �����������
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	Fraction& operator=(const Fraction&);
};

//Fraction(..) - ����������� � ����� �����������, �� ���������� �� - ���������(0, 1).
//Fraction(..) - ����������� �����������.

#endif // FRACTION_H_INCLUDED