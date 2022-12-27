#include<iostream>

#include"Ejercicio_7.h"

void ImprimirCadena(const std::string &solucion) {
  for(int i = 0; i <= solucion.size();) {
    std::cout << solucion[i];
    i++;
  }
  std::cout << std::endl;
}

void SubStr(const std::string &cadena, const size_t &numero1, const size_t &numero2) {
  std::string solucion;
  
  if(numero1 >= cadena.size()) {
    std::cout << "("")" << std::endl;
  } else {
    for(int i = numero1; i < numero2;) {
      solucion.pushback(cadena[i]);
      i++;
    }
  }
  Impirmircadena(solucion);
}

