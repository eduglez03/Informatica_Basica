#include<iostream>

#include<Ejercicio_2.h>

std::string TransformarCadena(std::string &cadena) {
  std::string cadena_convertida;

  cadena_convertida = cadena;

  for(int i = 0; i <=cadena_convertida.size();) {
    
    if(cadena_convertida[i] == tolower(cadena_convertida[i])) {
      cadena_convertida[i] = tupper(cadena_convertida[i]);
    }
    
    if(cadena_convertida[i] == tupper(cadena_convertida[i])) {
      cadena_convertida[i] = tolower(cadena_convertida[i]);
    }
  }
  
  return cadena_convertida;
}