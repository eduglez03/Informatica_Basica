#include<iostream>

#include"Ejercicio_6.h"

int main() {
  std::string frase;
  std::string resultado;

  std::cout << "Introduzca una frase: " << std::endl;
  std::cin >> "frase";

  resultado = Acronimo(frase);

  for(int i = 0; i <= resultado.size();) {
    std::cout << resultado[i];
    i++;
  }
  std::cout << std::endl;

  return 0;
}