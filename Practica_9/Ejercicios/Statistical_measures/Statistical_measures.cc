/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Statistical_measures.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads non-empty sequences of real numbers and, for each sequence, prints its minimum, its maximum and its average.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17179_en
  */

#include <iomanip>
#include <iostream>

int main() {
  int numero;
  std::cin >> numero;
  for (int i = 0; i < numero; i++) {
    int measure;
    std::cin >> measure;
    double nm, maximo, minimo, mj;
    std::cin >> maximo;
    minimo = maximo;
    mj = maximo;
    for (int j = 1; j < measure; j++) {
      std::cin >> nm;
      maximo = std::max(nm, maximo);
      minimo = std::min(nm, minimo);
      mj += nm;
    }
    std::cout << std::fixed << std::setprecision(4) << minimo << ' ' << maximo << ' ' << mj / measure << std::endl;
  }
}