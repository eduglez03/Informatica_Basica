/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Equal_to_the_last_one.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads a non-empty sequence of integer numbers, and tells how many of them are equal to the last one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */

#include <iostream>

int VerCuantoSeRepite(const int cantidad_de_numero, const int& numeros_introducidos[]) {
  const int kUltimoNumero = numeros_introducidos[cantidad_de_numero - 1];
  int contador{0};  // count of repeated element
  for (int i{0}; i < (cantidad_de_numero - 1); i++) {
    if (kUltimoNumero == numeros_introducidos[i]) {
      contador++;
    }
  }
  return contador;
}

int main() {
  int cantidad_de_numero{0};
  while (std::cin >> cantidad_de_numero) {
    int numeros_introducidos[cantidad_de_numero];
    for (int i{0}; i < cantidad_de_numero; i++) {
      std::cin >> numeros_introducidos[i];
    }
    std::cout << VerCuantoSeRepite(cantidad_de_numero, numeros_introducidos)
              << endl;
  }
  return 0;
}