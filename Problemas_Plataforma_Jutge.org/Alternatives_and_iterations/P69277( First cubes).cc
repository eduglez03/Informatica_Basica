// ENUNCIADO PROBLEMA: https://jutge.org/problems/P69277_en

#include<iostream>

int main() {
  int numero{0};

  std::cout << "Introduzca un numero: " << std::endl;
  std::cin >> numero;
  
  std::cout << 0;
  for (int i = 1; i <= numero;) {
    int potencias{0};
    potencias = i * i * i;
    std::cout << ", " << potencias ;
    i++;
  }
  
  std::cout << std::endl;

  return 0;
}