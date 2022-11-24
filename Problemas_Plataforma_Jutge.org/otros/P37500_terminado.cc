//ENUNCIADO PROBLEMA: https://jutge.org/problems/P37500_en

#include<iostream>

int main() {
  int numero_introducido{0};

  std::cout << "Introduzca un número natural n: " << std::endl;
  std::cin >> numero_introducido;

  for (int i = 0; i <= numero_introducido; i++) {
    std::cout << i << std::endl;
  }
  return 0;
}