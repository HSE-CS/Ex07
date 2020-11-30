// Copyright 2020 GHA Test Team
#include <iostream>
#include "Fraction.h"

int main(){
   Fraction a(1, 2), b(2, 3), c;
   c = a/b;
   std::cout << c.getValue();
   return 0;
}