// ENUNCIADO PROBLEMA: https://jutge.org/problems/P97156_en

#include<iostream>

int main() {
  int numero_a{0};
  int numero_b{0};

  std::cout << "Introduzca dos números: " << std::endl;
  std::cin >> numero_a >> numero_b;

  if (numero_a > numero_b) {
    for (int i = numero_b; i <= numero_a;) {
      std::cout << i; 
      i++;
    }
  } else {
    for (int i = numero_a; i <= numero_b;) {
      std::cout << " " << i << ","; 
      i++;
    }
  }

  std::cout << std::endl;
  
  return 0;
}