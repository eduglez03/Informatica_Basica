// ENUNCIADO PROBLEMA: https://jutge.org/problems/P52847_en

#include<iostream>
#include<vector>

int main() {
  int numero1{0};
  int numero2{0};
  int numero3{0};
  int maximo{0};

  std::cout << "Introduzca tres números enteros: " << std::endl;
  std::cin >> numero1 >> numero2 >> numero3;

  if (numero1 > numero2) {
    if (numero1 > numero3) {
      std::cout << numero1;
    }
  }

  if (numero2 > numero1) {
    if (numero2 > numero3) {
      std::cout << numero2;
    }
  }
  
  if (numero3 > numero2) {
    if (numero3 > numero1) {
      std::cout << numero3;
    }
  }
  
  return 0;
}