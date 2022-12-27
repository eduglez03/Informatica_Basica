#include<iostream>

#include<Ejercicio_2.h>

int main() {

  std::string cadena_introducida;
  std::string cadena_convertida;

  std::cout << "Introduzca una cadena: " << std::endl;
  std::cin >> cadena_introducida;

  cadena_convertida = TransformarCadena(cadena_introducida);
  
  for(int i = 0; i <= cadena_convertida.size();) {
    std::cout << cadena[i];
    i++;
  }

  std::cout << std::endl;
  
  return 0;
}