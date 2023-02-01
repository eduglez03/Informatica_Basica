/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Sequential_search_in_array.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a function that tells if the integer number x is present in the vector of integer numbers v.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11725_en
  */

#include <iostream>
#include <vector>

// Identificadores no significativos porque el Jutge me lo pide así.
bool exists(int x, const std::vector<int>& v) {
  const int kVectorsizes = v.size() - 1;
  int contador{0};
  for (int i{0}; i <= kVectorsizes; i++) {
    if (x == v[i]) {
      return true;
    }
  }
  return false;
}

int main() {
  std::vector<int> lista_de_numeros{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int numero;
  std::cin >> numero;
  std::cout << exists(numero, lista_de_numeros);
  return 0;
}