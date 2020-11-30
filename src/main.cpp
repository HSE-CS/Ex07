// Copyright 2020 <Jiiijyyy>
#include "Fraction.h"


int main()
{
	Fraction num; //Создание элемента класса
	Fraction num2(4, 4);
	Fraction num3 = num + num2;
	std::cout << num3.getValue() << std::endl;
	return 0;
}


