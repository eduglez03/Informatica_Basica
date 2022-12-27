#include<iostream>

#include"Ejercicio_8.h"

int main() {
  std::string cadena1;
  std::string cadena2;
  bool resultado;

  std::cout << "Introduzca dos cadenas: " << std::endl;
  std::cin >> cadena1 >> cadena2;

  resultado = CompararCadenas(cadena1, cadena2);

  if(resultado == 1) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "FALSE" << std::endl;
  }

  return 0;
}