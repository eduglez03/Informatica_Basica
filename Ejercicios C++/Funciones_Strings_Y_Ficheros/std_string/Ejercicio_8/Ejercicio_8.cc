#include<iostream>

#include"Ejercicio_8.h"

bool CompararCadenas(const std::string &cadena_1, const std::string cadena_2) {
  char caracter_cadena2; // primer caracter de la cadena 2
  int caracter_cadena1{0}; // posicion del caracter de la cadena 1 que es igual al primer caracter de la cadena 2
  std::string subcadena1; // cadena queb almacena la posible subcadena que queremos hallar

  caracter_cadena2 = cadena_2[0];

  for(int i = 0; i <= cadena_1.size();) {
    if(cadena_1[i] == caracter_cadena2) {
      caracter_cadena1 = cadena_1[i];
    }
    i+++;
  }

  for(int i = caracter_cadena1; i <= cadena_2.size();) {
    subcadena1.pushback(cadena_1[i]);
    i++;
  }

  for(int i = 0; i <= cadena_2.size();) {
    for(int j = 0; j <= cadena_2.size();) {
      if(subcadena1[i] != cadena_2[j]) {
        return false;
      }
    }
  } else {
    return true;
  }

}