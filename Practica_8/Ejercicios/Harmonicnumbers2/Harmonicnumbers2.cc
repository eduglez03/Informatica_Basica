/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Harmonicnumbers2.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */

#include <iomanip>
#include <iostream>

double CalculateHarmonicNumber(const int first_number_introduced, const int second_number_introduced) {
  double harmonic_number{0};
  for (double counter = (second_number_introduced + 1); counter <= first_number_introduced; ++counter) {
    harmonic_number = harmonic_number + (1.00 / counter);
  }
  return harmonic_number;
}

int main() {
  double first_number_introduced, second_number_introduced;
  double harmonic_first_number, harmonic_second_number;
  while (std::cin >> first_number_introduced >> second_number_introduced) {
    std::cout << std::fixed << std::setprecision(10) << CalculateHarmonicNumber(first_number_introduced, second_number_introduced) << std::endl;
  }
  return 0;
}