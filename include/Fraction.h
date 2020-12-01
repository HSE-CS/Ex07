// Copyright 2020 Lupehina
#include <iostream>
#include <string>

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

class Fraction {
private:
    int numerator, denominator;

    // закрытый метод нормировки (сокращения дроби 2/4 -> 1/2).
    void normalize();

public:
    // конструктор с двумя параметрами,
    // со значениями по-умолчанию (0,1).
    explicit Fraction(int n = 0, int d = 1) {
        this->numerator = n;
        this->denominator = d;
    }

    // конструктор копирования.
    Fraction(const Fraction &f) {
        this->numerator = f.numerator;
        this->denominator = f.denominator;
    }

    // метод, возвращающий строку типа std::string,
    // содержащую изображение дроби,
    // например "1/2" или "-5/6".
    // Дробь с единичным знаменателем выводится как целое число.
    std::string getValue();

    // вернуть числитель.
    int getNumerator() const;

    // вернуть знаменатель.
    int getDenominator() const;

    // Реализовать в классе Fraction перегрузку операций:
    // operator+ - сложение
    Fraction operator+(Fraction &f);

    // operator- - вычитание
    Fraction operator-(const Fraction &f);

    // operator* - умножение
    Fraction operator*(const Fraction &f);

    // operator/ - деление
    Fraction operator/(const Fraction &f);

    // operator= - присваивание
    Fraction &operator=(const Fraction &f);

    // В  случае появления нуля в знаменателе,
    // необходимо выбрасывать исключение с помощью оператора throw.
};

int NOD(int, int);

#endif  // INCLUDE_FRACTION_H_
