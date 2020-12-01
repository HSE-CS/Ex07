#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction a1(-1, 2);
	Fraction a2(3, 10);
	Fraction a3;
	cout << a1.getValue() << endl;

	a3 = a1 * a2;

	cout << a3.getValue() << endl;
}