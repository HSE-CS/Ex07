//RogozyanAnastasiya
#include <iostream>
#include "../include/Fraction.h"

int main() {
    Fraction num;
    Fraction num2(2, 4);
    Fraction num3 = num + num2;
    std::cout << num3.getValue() << std::endl;
    Fraction a;
    std::cout << a.getNumerator() << std::endl;
    std::cout << a.getDenominator() << std::endl;
    Fraction a2(1, 2);
    std::cout << a2.getNumerator() << std::endl;
    std::cout << a2.getDenominator() << std::endl;
    Fraction a3(1, 2);
    Fraction b(a3);
    std::cout << b.getNumerator() << std::endl;
    std::cout << b.getDenominator() << std::endl;
    Fraction a4(1, 2);
    Fraction b2(a4);
    Fraction c;
    c = a4 + b2;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator()  << std::endl;
    Fraction a5(1, 2);
    Fraction b3(-1, 2);
    Fraction c2;
    c2 = a5 + b3;
    std::cout << c2.getNumerator() << std::endl;
    std::cout << c2.getDenominator() << std::endl;
    Fraction a6(1, 2);
    Fraction b4(1, 2);
    Fraction c3;
    c3 = a6 - b4;
    std::cout << c3.getNumerator() << std::endl;
    std::cout << c3.getDenominator() << std::endl;
    Fraction a7(1, 3);
    Fraction b5(2, 3);
    Fraction c4;
    c4 = a7 + b5;
    std::cout << c4.getNumerator()  << std::endl;
    std::cout << c4.getDenominator() << std::endl;
    Fraction a8(1, 2);
    Fraction b6(1, 2);
    Fraction c5;
    c5 = a8 * b6;
    std::cout << c5.getNumerator()  << std::endl;
    std::cout << c5.getDenominator() << std::endl;
    Fraction a9(1, 5);
    Fraction b7(1, 2);
    Fraction c6;
    c6 = a9 / b7;
    std::cout << c6.getNumerator() << std::endl;
    std::cout << c6.getDenominator()  << std::endl;
    return 0;
}
