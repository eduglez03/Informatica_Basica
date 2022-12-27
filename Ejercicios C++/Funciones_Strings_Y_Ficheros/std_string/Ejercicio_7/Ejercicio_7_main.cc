#include<iostream>

#include"Ejercicio_7.h"

int main() {
  std::string str;
  size_t pos;
  size_t len;

  std::cout << "Introduzca una cadena y dos numeros enteros: " << std::endl;
  std::cin >> str >> pos >> len;

  SubStr(str, pos, len);
 
  return 0;
}