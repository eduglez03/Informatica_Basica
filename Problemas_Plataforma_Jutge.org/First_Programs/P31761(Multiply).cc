// ENUNCIADO PROBLEMA: https://jutge.org/problems/P31761_en

#include<iostream>

int main() {
  long int numero1{0};
  long int numero2{0};
  long int multiplicacion{0};

  std::cout << "Introduzca dos números naturales: " << std::endl;
  std::cin >> numero1 >> numero2;

  multiplicacion = numero1 * numero2;

  std::cout << "La multiplicación da como resultado: " << multiplicacion << std::endl;

  return 0;
}