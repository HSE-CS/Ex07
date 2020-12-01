//Copyright 2020 VladimirUspensky
#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

    Fraction first(1, 6);
    Fraction second(1, 2);
    Fraction third;
    third = first + second;
    cout << third.getNumerator() << endl;

    return 0;
}

