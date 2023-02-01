/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Increasing_pairs.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs 
  * of consecutive numbers such that the second number of the pair is greater than the first one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73501_en
  */

#include <iostream>

int main() {
  int numero;
  std::cin >> numero;
  for (int i = 0; i < numero; i++) {
    int auxiliar1 = -1, auxiliar2 = -1, auxiliar3 = 0;
    while (auxiliar1 != 0) {
      std::cin >> auxiliar1;
      if (auxiliar1 > auxiliar2 and auxiliar2 != -1) auxiliar3++;
      auxiliar2 = auxiliar1;
    }
    std::cout << auxiliar3 << std::endl;
  }
}