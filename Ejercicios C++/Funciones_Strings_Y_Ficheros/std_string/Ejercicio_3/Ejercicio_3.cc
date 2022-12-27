#include<iostream>

#include"Ejercicio_3.h"

std::string CambiarCadena(std::string &cadena) {
  std::string cadena_introducida;
  std::string solucion;
  
  cadena_introducida = cadena;

  for(int i = 0; i <= cadena_introducida.size();) {
    cadena_introducida[i] = cadena_introducida[i] + 1;
    i++;
  }

  return cadena_introducida;  
}