/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Maximum_sums.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads a sequence of numbers, and prints the maximum quantity that can be obtained 
  * by adding numbers consecutively from the beginning, and the maximum quantity that can be obtained by adding numbers consecutively from the end.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P20262_en
  */

#include <iostream>
#include <vector>

int main() {
  int numero;
  while (std::cin >> numero) {
    std::vector<int> vector(numero);
    int max = 0, resultado = 0;
    for (int i = 0; i < numero; i++) {
      std::cin >> vector[i];
      resultado += vector[i];
      if (resultado > max) max = resultado;
    }
    std::cout << max << ' ';
    max = 0, resultado = 0;
    for (int i = numero - 1; i >= 0; i--) {
      resultado += vector[i];
      if (resultado > max) max = resultado;
    }
    std::cout << max << std::endl;
  }
}