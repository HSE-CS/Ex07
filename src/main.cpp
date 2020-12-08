  // Copyright by GHA test team
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction a(3, 5);
    Fraction b(a);
    Fraction c(8, 9);
    Fraction d(10, 2);
    std::cout << a.getValue() << " -- First fraction" << std::endl;
    std::cout << b.getValue() << " -- Copy of first fraction" << std::endl;
    std::cout << c.getValue() << " -- Second fraction\n" << std::endl;
    std::cout << d.getValue()
        << " -- Third fraction which was '10/2'\n" << std::endl;

    std::cout << (a + c).getValue()
        << " -- First fraction + Second fraction" << std::endl;
    std::cout << (a - c).getValue()
        << " -- First fraction - Second fraction" << std::endl;
    std::cout << (a * c).getValue()
        << " -- First fraction * Second fraction" << std::endl;
    std::cout << (a / c).getValue()
        << " -- First fraction / Second fraction" << std::endl;
    c = a;
    std::cout << c.getValue()
        << " -- Now the third fraction is equal to first \n"
        << std::endl;

    return 0;
}

