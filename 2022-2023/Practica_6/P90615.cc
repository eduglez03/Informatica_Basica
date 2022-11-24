// ENUNCIADO PROBLEMA: https://jutge.org/problems/P90615_en

#include<iostream>

int main() {
  int numero1{0};
  int numero2{0};
  int numero3{0};

  std::cout << "Introduzca tres números: " << std::endl;
  std::cin >> numero1 >> numero2 >> numero3;
  
  if (numero1 > (numero2 && numero3)) {
    std::cout << numero1 << std::endl;
  }
  
  if (numero2 > (numero1 && numero3) ) {
    std::cout << numero2 << std::endl;
  } 
  
  return 0;
}