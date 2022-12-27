#include<iostream>

#include"Ejercicio_3.h"

int main() {
  std::string cadena;
  std::string solucion;

  std::cout << "Introduzca una cadena de texto: " << std::endl;
  std::cin >> cadena;

  solucion = CambiarCadena(cadena);
  
  for(int i = 0; i <= solucion.size();) { 
    std::cout << solucion[i];
    i++;
  }
  std::cout << std::endl;

  return 0;
}