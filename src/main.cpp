// Copyright 2020 Alexander Shirokov

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction a(1, 2); 
	Fraction b(a);
	Fraction c;
	cout << c.getValue() << '\n';
	c = a + b;
	cout << c.getValue() << '\n';
	c = a - b;
	cout << c.getValue() << '\n';
	c = a * b;
	cout << c.getValue() << '\n';
	c = a / b;
	cout << c.getValue() << '\n';
	c = b;
	cout << c.getValue();
}
