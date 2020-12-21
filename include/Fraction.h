#include <stdio.h>
#include <iostream>

using namespace std;


#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

class Fraction {
private:
	int numerator, denominator;
public:
	Fraction(int numerator, int denominator);
//	Fraction(const Fraction &test);
};


//Fraction::Fraction(const Fraction &test){
////	this->numerator = second.numerator;
////	this->denominator = second.denominator;
//}



#endif /* INCLUDE_FRACTION_H_ */
