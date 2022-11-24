// ENUNCIADO PROBEMA: 

#include<iostream>

int main() {
  int numero{0};
  int kvector[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "Introduzca un numero: " << std::endl;
  std::cin >> numero;

  for (int i = 0; i <= 10;) {
    int resultado{0};
    resultado = numero * kvector[i];
    std::cout << numero << " * " << i << " = " << resultado << std::endl;
    i++;
  }
  
  return 0;
}