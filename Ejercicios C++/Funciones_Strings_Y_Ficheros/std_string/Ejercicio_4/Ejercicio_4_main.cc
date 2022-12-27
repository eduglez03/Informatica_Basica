#include<iostream>

#include"Ejercicio_4.h"

int main() {

  std::string cadena;
  char caracter;

  std::cout << "Introduzca una cadena y a continuación de esta, un caracter que quiere buscar en ella: " << std:endl;
  std::cin >> cadena >> caracter;

  BuscarCaracter(cadena, caracter);

  return 0;
}