/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Counting_frequences.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads a sequence of natural numbers and that prints, for each one, how many times it appears.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P63414_en
  */

#include <iostream>
#include <map>

int main() {
  int numero;
  std::cin >> numero;
  std::map<int, int> m;
  while (numero--) {
    int p;
    std::cin >> p;
    m[p]++;
  }
  for (auto it = m.begin(); it != m.end(); it++) {
    std::cout << it->first << " : " << it->second << std::endl;
  }
}