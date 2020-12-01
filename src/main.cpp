// Copyright 30.11.20 DenisKabanov

#include "Fraction.h"

int main(){
    Fraction a;
    std::cout << a.getValue()<< std::endl;
    Fraction b(50, 100);
    std::cout << b.getValue() << std::endl;
    Fraction c(b);
    std::cout << c.getValue() << std::endl;
    Fraction d(57, 100), e(43, 100);
    Fraction f = d + e;
    std::cout << "operator + " << f.getValue() << std::endl;
    Fraction g = d - e;
    std::cout << "operator - " << g.getValue() << std::endl;
    Fraction k = d * e;
    std::cout << "operator * " << k.getValue() << std::endl;
    Fraction h = d / e;
    std::cout << "operator / " << h.getValue() << std::endl;
    std::cout << "getNumerator " << d.getNumerator() << std::endl;
    std::cout << "getDenominator " << d.getDenominator() << std::endl;
    return 0;
}
