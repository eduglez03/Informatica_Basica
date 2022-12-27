#include<iostream>

#include"Ejercicio_6.h"

int main() {
  int binario{0};
  int solucion{0};

  std::cout << "Introduzca un número binario: " << std::endl;
  std::cin >> binario;

  solucion = TransformarBinario(binario);

  std::cout << solucion << std::endl;

  return 0;
}