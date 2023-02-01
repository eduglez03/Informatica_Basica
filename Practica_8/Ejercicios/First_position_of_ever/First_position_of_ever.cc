/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file First_position_of_ever.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads a sequence of natural numbers and prints the position of the first even number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078
  */

#include <iostream>

void StartMessage() {
  std::cout << "This program read a sequence of numbers digit by user, then return the value of the position of the first even number" << std::endl;
}

int PrintFirstEven(int number, int& counter) {
  counter = counter + 1;
  if ((number % 2) == 0) {
    return counter;
  }
  return 0;
}

int main() {
  StartMessage();
  int number, even, counter{0};
  while (std::cin >> number) {
    even = PrintFirstEven(number, counter);
    if (even != 0) {
      std::cout << counter << std::endl;
      break;
    }
  }
  return 0;
}