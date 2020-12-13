#include <iostream>
#include "Fraction.h"

int main() {
    Fraction first(1, 6);
    Fraction second(1, 2);
    Fraction third;
    third = first + second;
    std::cout << third.getNumerator() << std::endl;

    return 0;
}
