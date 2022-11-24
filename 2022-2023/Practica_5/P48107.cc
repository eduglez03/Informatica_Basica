// Write a program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
// Remember that, by definition, d i r must be the only integer numbers such that 0 ≤ r < b and d · b + r = a.
// https://jutge.org/problems/P48107

#include<iostream>

int main() {
  int numero1{0};
  int numero2{0};
  int division{0};
  int resto{0};


  std::cout << "Introduzca dos números: " << std::endl;
  std::cin >> numero1 >> numero2;

  division = numero1 / numero2;
  resto = numero1 % numero2;

  std::cout << division << " " << resto << std::endl;

  return 0;
}