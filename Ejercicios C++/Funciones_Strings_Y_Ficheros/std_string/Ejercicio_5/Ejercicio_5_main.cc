#include<iostream>

#include"Ejercicio_5.h"

int main() {
  std::string cadena;
  std::string cadenaResultado;
  int numero1;
  int numero2;

  std::cout << "Introduzca una cadena, y a continuacion dos numeros: " << std::endl;
  std::cin >> cadena >> numero1 >> numero2;

  cadenaResultado = SubString(cadena, numero1, numero2);

  for(int i = 0; i <= cadenaResultado.size();) {
    std::cout << cadenaResultado[i];
    i++;
  }
  std::cout << std::endl;

  return 0;
}