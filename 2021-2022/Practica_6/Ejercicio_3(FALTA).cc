// Escriba un programa que tome como entrada un número natural e imprima el resultado de la suma de sus tres últimos dígitos.

#include<iostream>
#include<vector>
#include<math.h>

int main() {
  int numero_introducido{0};
  int auxiliar{0};
  std::vector<int>cifras_numero;
  

  std::cout << "Introduzca un número natural: " << std::endl;
  std::cin >> numero_introducido;

  while (auxiliar > 1) {
    auxiliar = numero_introducido * (1/10);
    cifras_numero.push_back(auxiliar);
    
  }

  return 0;
}