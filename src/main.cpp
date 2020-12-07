// Copyright [2020] <Balayan Roman>

#include <iostream>
#include "../include/Fraction.h"

using namespace std;

int main() {
	int num, denom;
	cout << "Enter the numerator ";
	cin >> num;
	cout << "Enter the denominator ";
	cin >> denom;
	Fraction a(num, denom);
	cout << "\na = " << a.getValue() << endl;
	Fraction b;
	cout << "b = " << b.getValue() << endl;
	Fraction c = a - b;
	cout << "c = " << c.getValue() << endl;
	cout << "a = " << a.getValue() << endl;
	c = a;
	cout << "c = " << c.getValue() << endl;
	Fraction d(c);
	d = d * b;
	cout << "d = " << d.getValue();
}

