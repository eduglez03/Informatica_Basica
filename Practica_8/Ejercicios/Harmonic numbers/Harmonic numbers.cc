/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Harmonicnumbers.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539
  */

#include <iomanip>
#include <iostream>

void FirstMessage() {
  std::cout << "This program print the harmonic number of an introduced number.";
}

double CalculateHarmonicNumber(int introduced_number) {
  double harmonic_number{0};
  double division_of_counter;
  for (double counter = 1; counter <= introduced_number; ++counter) {
    division_of_counter = (1 / counter);
    harmonic_number = harmonic_number + division_of_counter;
  }
  return harmonic_number;
}

int main() {
  FirstMessage();
  int introduced_number;
  std::cin >> introduced_number;
  std::cout << std::fixed << std::setprecision(4) << CalculateHarmonicNumber(introduced_number) << std::endl;
  return 0;
}
