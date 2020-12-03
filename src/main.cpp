#include<iostream>
#include"Fraction.h"

int main(){
Fraction a(1, 3); // 1/2
Fraction b(0,0);
Fraction c;
std::cout << a.getValue() << endl; // 0
c = a / b;
std::cout << c.getValue(); // 1
}