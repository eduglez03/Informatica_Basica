// ENUNCIADO PROBLEMA: https://jutge.org/problems/P57548_en

#include<iostream>

int main() {

  int numero1{0};
  int numero2{0};
  int suma{0};
  
  std::cout << "Introduzca dos números enteros: " << std::endl;
  std::cin >> numero1 >> numero2;

  suma = numero1 + numero2;

  std::cout << "La suma de " << numero1 << " + " << numero2 << " es igual a: " << suma << std::endl;

  return 0;
}