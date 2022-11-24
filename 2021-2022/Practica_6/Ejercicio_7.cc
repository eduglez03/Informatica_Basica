// Escriba un programa que lea un número natural e imprima en pantalla un "cuadrado hecho de asteriscos" del tamaño indicado. 

#include<iostream>

int main() {
  int numero{0};

  std::cout << "Introduzca el tamaño de su cuadrado: " << std::endl;
  std::cin >> numero;

  for (int j = 0; j < numero ; j++) {
    for (int i = 0; i < numero ; i++) {
      std::cout << " * ";
    }
    std::cout << std::endl;
  }

  return 0;
}