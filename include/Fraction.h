#ifndef FRACTION_H
#define FRACTION_H
#include<sstream>
#include<iostream>

class Fraction{
private:
	int numerator, denominator;
	void normalize(); //закрытый метод нормировки
public:
	explicit Fraction();
	explicit Fraction(int new_numerator, int new_denominator); // конструктор с двумя параметрами, со значениями по - умолчанию(0, 1).
	Fraction(const Fraction& F); // конструктор копирования.
	std::string getValue() const; //метод, возвращающий строку типа std::string, содержащую изображение дроби
	int getNumerator() const; //вернуть числитель
	int getDenominator() const; //вернуть знаменатель
};

int NOD(int a, int b);
Fraction operator+(const Fraction& a, const Fraction& b);
Fraction operator-(const Fraction& a, const Fraction& b);
Fraction operator*(const Fraction& a, const Fraction& b);
Fraction operator/(const Fraction& a, const Fraction& b);

#endif