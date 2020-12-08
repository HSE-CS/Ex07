#include "Fraction.h"

int main() {
    Fraction a(-16,20);
    std::cout << a.getValue() << std::endl;
    a.normalize();
    std::cout << a.getValue() << std::endl;
    Fraction b(5,5);
    Fraction c = a - b;
    std::cout << c.getValue() << std::endl;
    return 0;
}
