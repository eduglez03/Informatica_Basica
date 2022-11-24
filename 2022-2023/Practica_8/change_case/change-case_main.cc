#include<iostream>

#include "change_case.h"

int main() {

  std::string palabra;

  std::cout << "Introduzca una cadena de caracteres sin espacios entre ellos: " << std::endl;
  std::cin >> palabra;

  Conversor(palabra);

  return 0;
}