#ifndef FRACTION_H
#define FRACTION_H
#include<sstream>
#include<iostream>

class Fraction{
private:
	int numerator, denominator;
	void normalize(); //�������� ����� ����������
public:
	explicit Fraction();
	explicit Fraction(int new_numerator, int new_denominator); // ����������� � ����� �����������, �� ���������� �� - ���������(0, 1).
	Fraction(const Fraction& F); // ����������� �����������.
	std::string getValue() const; //�����, ������������ ������ ���� std::string, ���������� ����������� �����
	int getNumerator() const; //������� ���������
	int getDenominator() const; //������� �����������
};

int NOD(int a, int b);
Fraction operator+(const Fraction& a, const Fraction& b);
Fraction operator-(const Fraction& a, const Fraction& b);
Fraction operator*(const Fraction& a, const Fraction& b);
Fraction operator/(const Fraction& a, const Fraction& b);

#endif