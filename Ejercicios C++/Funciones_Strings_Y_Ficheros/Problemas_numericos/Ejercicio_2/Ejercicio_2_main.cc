#include<iostream>

#include"Ejercicio_2.h"

int main() {
  int numero{0};

  std::cout << "Introduzca un número natural: " << std::endl;
  std::cin >> numero;
  
  Espar(numero);

  return 0;
}