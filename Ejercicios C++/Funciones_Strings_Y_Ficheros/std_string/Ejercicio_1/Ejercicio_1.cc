#include<iostream>

#include "Ejercicio_1.h"

int CountVowels(std::string &cadena) {
  int total_vocales;

  for(int i = 0; i <= cadena.size();) {
    switch(cadena[i]) {
      case 'a':
        total_vocales++;
      case 'e':
        total_vocales++;
      case 'i':
        total_vocales++;
      case 'o':
        total_vocales++;
      case 'u': 
        total_vocales++;
      case 'A':
        total_vocales++;
      case 'E':
        total_vocales++;
      case 'I':
        total_vocales++;
      case 'O':
        total_vocales++;
      case 'U':
        total_vocales++;
    }

    i++;
  }

  return total_vocales;
}