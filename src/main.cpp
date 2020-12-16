// Copyright 2020 Mushka Nikita

#include "Fraction.h"

int main(){
    Fraction a(2, 4);
    std::cout<< a.getValue() <<'\n';
    Fraction b(a);
    std::cout << b.getValue() << '\n';
    Fraction c;
    std::cout << c.getValue() << '\n';
    c = a + b;
    std::cout << c.getValue();
}
