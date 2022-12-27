#include<iostream>

#include"Ejercicio_4.h"

void BuscarCaracter(const std::string &cadena, const char &caracter) {
  int contador{0};
  const int defecto{-1};

  for(int i = 0; i <= cadena.size();) {
    if(cadena[i] == caracter) {
      contador++;
    }
    i++;
  }

  if(contador == 0) {
    std::cout << defecto << std::endl;
  } else {
    std::cout << contador << std::endl;
  }

}