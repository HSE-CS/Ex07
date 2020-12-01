// Copyright 2020 Lupehina
#include <iostream>
#include "Fraction.h"

int main() {
    // test 1 +
/*
    Fraction a;
    a.getNumerator();   // 0
    a.getDenominator();  // 1
    std::cout << a.getNumerator() << " // 0" << std::endl;
    std::cout << a.getDenominator() << " // 1" << std::endl;
    std::cout << a.getValue() << " // 0" << std::endl; //0
*/


    // test 2 +
/*

    Fraction a(1, 2);
    a.getNumerator();   // 1
    a.getDenominator();  // 2
    std::cout << a.getNumerator() << " // 1" << std::endl;
    std::cout << a.getDenominator() << " // 2" << std::endl;
    std::cout << a.getValue() << " // 1/2" << std::endl; //0
*/

    // test 3 +
/*

    Fraction a(1, 2);
    Fraction b(a);
    b.getNumerator(); //1
    b.getDenominator(); //2
    std::cout << b.getNumerator() << " // 1" << std::endl;
    std::cout << b.getDenominator() << " // 2" << std::endl;
    std::cout << b.getValue() << " // 1/2" << std::endl; //0
*/

    // test 4 +
/*

    Fraction a(1, 2);
    Fraction b(a);
    Fraction c;
    c = a + b;
    c.getNumerator();//1
    c.getDenominator();//1
    std::cout << c.getNumerator() << " // 1" << std::endl;
    std::cout << c.getDenominator() << " // 1" << std::endl;
    std::cout << c.getValue() << " // 1" << std::endl; //0
*/

    // test 5 +
/*

    Fraction a(1, 2);
    Fraction b(-1, 2);
    Fraction c;
    c = a + b;
    c.getNumerator(); //0
    c.getDenominator();//1
    std::cout << c.getNumerator() << " // 0" << std::endl;
    std::cout << c.getDenominator() << " // 1" << std::endl;
    std::cout << c.getValue() << " // 0" << std::endl; //0
*/

    // test 6 +
/*

    Fraction a(1, 2);
    Fraction b(1, 2);
    Fraction c;
    c = a - b;
    c.getNumerator(); //0
    c.getDenominator();//1
    std::cout << c.getNumerator() << " // 0" << std::endl;
    std::cout << c.getDenominator() << " // 1" << std::endl;
    std::cout << c.getValue() << " // 0" << std::endl; //0
*/

    // test 7 +
/*

    Fraction a(1, 3);
    Fraction b(2, 3);
    Fraction c;
    c = a + b;
    c.getNumerator();//1
    c.getDenominator();//1
    std::cout << c.getNumerator() << " // 1" << std::endl;
    std::cout << c.getDenominator() << " // 1" << std::endl;
    std::cout << c.getValue() << " // 1" << std::endl; //0
*/

    // test 8 +
/*

    Fraction a(1, 2);
    Fraction b(1, 2);
    Fraction c;
    c = a * b;
    c.getNumerator();//1
    c.getDenominator();//4
    std::cout << c.getNumerator() << " // 1" << std::endl;
    std::cout << c.getDenominator() << " // 4" << std::endl;
    std::cout << c.getValue() << " // 1/4" << std::endl; //0
*/

    // test 9 +
/*

    Fraction a(1, 5);
    Fraction b(1, 2);
    Fraction c;
    c = a / b;
    c.getNumerator();//2
    c.getDenominator();//5
    std::cout << c.getNumerator() << " // 2" << std::endl;
    std::cout << c.getDenominator() << " // 5" << std::endl;
    std::cout << c.getValue() << " // 2/5" << std::endl; //0
*/

/*
    Fraction a(1, 2); // 1/2
    Fraction b(a);
    Fraction c;
    // std::cout << c.getValue(); // 0
    //  = a + b;
    // std::cout << c.getValue(); // 1
    // ...
*/
}


