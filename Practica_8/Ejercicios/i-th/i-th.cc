/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i-th.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */

#include <iostream>

bool SearchNumberPosition(int& counter, int number_sequence_position, int& sequence_number) {
  counter = counter + 1;
  bool position_situation{0};
  if (counter == number_sequence_position) {
    position_situation = 1;
  } else {
    position_situation = 0;
  }
  return position_situation;
}

int main() {
  int number_sequence_position;
  std::cin >> number_sequence_position;
  int sequence_number, counter{0};
  while (std::cin >> sequence_number) {
    if (SearchNumberPosition(counter, number_sequence_position, sequence_number) == 1) {
      std::cout << "At the position " << number_sequence_position << " there is a(n) " << sequence_number << "." << std::endl;
      break;
    }
  }
  return 0;
}