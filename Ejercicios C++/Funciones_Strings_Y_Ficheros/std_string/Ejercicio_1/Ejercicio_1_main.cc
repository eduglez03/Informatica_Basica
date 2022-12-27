#include<iostream>

#include "Ejercicio_1.h"

int main() {
  std::string cadena;
  int resultado{0};

  std::cout << "Introduzca una cadena: " << std::endl;
  std::cin >> cadena;

  resultado = CountVowels(cadena);

  std::cout << "El total de vocales es de : " << resultado << std::endl;

  return 0;
}