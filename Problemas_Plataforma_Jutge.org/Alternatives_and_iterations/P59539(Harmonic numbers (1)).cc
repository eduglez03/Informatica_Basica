// ENUNCIADO PROBLEMA: https://jutge.org/problems/P59539_en

#include<iostream>
#include <iomanip>

int main() {
  int numero{0};
  double resultado{0};

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  for (double i = 1; i <= numero;) {
    double fraccion{0};
    fraccion = 1 / i;
    resultado = resultado + fraccion;
    i++;
  }
  
  std::cout << std::setprecision(4) << std::fixed << resultado << std::endl;
  
  return 0;
} 