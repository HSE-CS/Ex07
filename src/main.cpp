//Copyright 2020 Smirnov Grigory
#include "Fraction.h"

int main()
{
	Fraction a(2, 4);
	Fraction b(-2, 8);
	cout << a.getValue() << endl << b.getValue() << endl;
	Fraction c = a - b;
	cout << c.getValue() << endl;
	Fraction d = a * b * b - c;
	cout << d.getValue() << endl << d.getNumerator();
	return 0;
}