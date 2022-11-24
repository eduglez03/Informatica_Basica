// ENUNCIADO PROBLEMA: https://jutge.org/problems/P41221_en

#include<iostream>

int main() {

  int numero1{0};
  int numero2{0};
  int numero3{0};
  int suma{0};

  std::cout << "Introduzca 3 números enteros: " << std::endl;
  std::cin >> numero1 >> numero2 >> numero3;

  suma = numero1 + numero2 + numero3;

  std::cout << "La suma de " << numero1 << " + " << numero2 << " + " << numero3 << " es: " << suma << std::endl;
  
  return 0;
}