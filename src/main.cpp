#include<iostream>
#include "Fraction.h"

using namespace std;

int main() {
  Fraction fst(-7, 4);
  Fraction scnd(5, 3);
  std::cout << fst.getNumerator() << endl;
  std::cout << fst.getDenominator() << endl;
  fst.normalize();
  cout << fst.getValue() << endl;
  cout << (fst * scnd).getValue() << endl;
}
