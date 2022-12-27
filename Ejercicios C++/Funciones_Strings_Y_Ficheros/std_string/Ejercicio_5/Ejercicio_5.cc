#include<iostream>

#include"Ejercicio_5.h"

std::string SubString(const std::string &cadena, const int &numero1, const int &numero2) {
  std::string cadenaIntroducida;
  std::string cadenaResultado;
  int numero_1{0};
  int numero_2{0};

  numero_1 = numero1 - 1;
  numero_2 = numero2 - 1;
  cadenaIntroducida = cadena;
  
  for(int i = numero_1; i <= numero_2;) {
    cadenaResultado.pushback(cadenaIntroducida[i]);
    i++;
  }

  return cadenaResultado;
}