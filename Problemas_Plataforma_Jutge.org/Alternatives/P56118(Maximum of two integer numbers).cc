// ENUNCIADO PROBLEMA: https://jutge.org/problems/P56118_en

#include<iostream>

int main() {
  int numero1{0};
  int numero2{0};
  int maximo{0};

  std::cout << "Introduzca dos números enteros: " << std::endl;
  std::cin >> numero1 >> numero2;

  if (numero1 == numero2) {
    std::cout << numero1;
  } else {
    if (numero1 > numero2) {
      std::cout << numero1;
    } else {
      std::cout << numero2;
    }
  }
  
  return 0;
}