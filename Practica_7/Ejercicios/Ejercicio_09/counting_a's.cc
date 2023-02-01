/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file counting_a's.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that reads a sequence of characters ended with a period and prints the number of letters ‘a’ in the sequence.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969
  */

#include<iostream>
#include<cstring>
int CantidadDeA(std::string mensaje) {
  int cantidad_de_a{0};
  const char KLetraA{'a'};
  for (int contador{0}; contador < mensaje.length(); ++contador) {
    if (mensaje[contador] == KLetraA) {
      ++cantidad_de_a;
    }
  }
  return cantidad_de_a;
}
int main() {
  std::string mensaje_introducido;
  std::getline(std::cin, mensaje_introducido);
  std::cout << CantidadDeA(mensaje_introducido) << std::endl;
  return 0;
}