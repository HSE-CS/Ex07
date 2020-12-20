#include "../include/Fraction.h"

signed main() noexcept {
    Fraction a(8, 10);
    Fraction b(3, 7);
    std::cout << (a + b).getValue() << '\n';
    Fraction c(8, 1);
    std::cout << c.getValue() << '\n';
    std::cout << (a / b).getValue() << '\n';
    std::cout << (a * b).getValue() << '\n';
    std::cout << (a - b).getValue() << '\n';
    c = a * a * a;
    std::cout << c.getValue() << '\n';
    return 0;
}
