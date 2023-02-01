/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Looking_for_an_a.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149
  */

#include <iostream>
#include <string>

bool BuscarA(std::string frase_introducida) {
  bool resultado{0};
  for (int contador = 0; contador < frase_introducida.length(); ++contador) {
    if (frase_introducida.at(contador) == 'a') {
      resultado = 1;
    }
  }
  return resultado;
}

int main() {
  std::string frase_introducida;
  getline(std::cin, frase_introducida);
  bool resultado{0};
  int longitud_frase;
  longitud_frase = frase_introducida.length();
  resultado = BuscarA(frase_introducida);
  if (resultado == 1) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}
