#include<iostream>

#include"Ejercicio_6.h"

std::string Acronimo(const std::string &cadena) {
  std::string Resultado;
  std::string frase;

  frase = cadena;

  for(int i = 0; i <= frase.size();) {
    if(frase[i] == tupper(frase[i])) {
      Resultado.pushbak(frase[i]);
    }
    i++;
  }
  
  return Resultado;
}