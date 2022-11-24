// ENUNCIADO PROBLEMA: https://jutge.org/problems/P37500_en

#include<iostream>

int main() {
  int numero{0};

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  for (int i = 0; i <= numero;) {
    std::cout << i << std::endl;
    i++;
  }

  return 0;
}