#pragma once
#include<iostream>
#include<string>
using namespace std;

class Fraction {
private:
	int numerator, denominator;
	void normalize();
public:
	Fraction()
	{
		int numerator = 0;
		int denominator = 1;
	}
	Fraction(const Fraction& x)
	{
		this->numerator = x.numerator;
		this->denominator = x.denominator;
	}
	Fraction(int a, int b)
	{
		if (b == 0 && a != 0) throw "Error";
		else
		{
			numerator = a;
			denominator = b;
		}
	}
	string getValue();
	int getNumerator();
	int  getDenominator();
	Fraction operator+(Fraction x);
	Fraction operator-(Fraction x);
	Fraction operator*(Fraction x);
	Fraction operator/(Fraction x);
	Fraction operator=(Fraction x);
 };
