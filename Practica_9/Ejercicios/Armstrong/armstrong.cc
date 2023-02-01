/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file armstrong.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Desarrolle un programa en C++ que tome como parámetro por línea de comandos un número e indique si se trata de un número de Armstrong o no.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int numero, numero2, unidad, operacion = 0;
  std::cout << "Digite un numero entero para analizar si es un numero Armstrong: ";
  std::cin >> numero;
  numero2 = numero;
  do {
    unidad = numero2 % 10;
    numero2 = numero2 / 10;
    operacion = operacion + unidad * unidad * unidad;
  } while (!(numero2 == 0));
  if (operacion == numero)
    std::cout << "Es un numero Armostrong";
  else
    std::cout << "No es un numero Armostrong";

  return 0;
}