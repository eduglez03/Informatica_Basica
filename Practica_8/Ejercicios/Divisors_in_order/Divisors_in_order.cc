/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program to print in order all the divisors of a given number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */

#include <cmath>
#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa muestra los divisores de uno o varios números introducidos por el usuario";
}

int CalculateDivisors(int number_introduced) {
  std::cout << "divisors of " << number_introduced << ":";
  for (int contador = 1; contador < sqrt(number_introduced); ++contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << contador;
    }
  }
  for (int contador = sqrt(number_introduced); contador >= 1; --contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << (number_introduced / contador);
    }
  }
  return 0;
}

int main() {
  MensajeInicial();
  int number_introduced;
  while (std::cin >> number_introduced) {
    CalculateDivisors(number_introduced);
    std::cout << "\n";
  }
  return 0;
}