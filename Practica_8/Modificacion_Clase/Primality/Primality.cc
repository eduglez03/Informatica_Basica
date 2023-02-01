/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Primality.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads a sequence of natural numbers and, for each one, tells if it is a prime number or not. 
  * Remember that a natural number is prime if and only if it is greater than 1 and it does not have any positive divisor other than 1 and itself.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713
  */

#include <cmath>
#include <iostream>

bool DeterminateIfPrimeOrNot(int introduced_number) {
  if (introduced_number == 0 || introduced_number == 1) {
    return 0;
  }
  for (int contador = 2; contador <= sqrt(introduced_number); ++contador) {
    if (introduced_number == 2) {
      return true;
    } else if (introduced_number % contador == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int introduced_number, number_of_inputs;
  std::cin >> number_of_inputs;
  while (std::cin >> introduced_number) {
    bool resultado{1};
    resultado = DeterminateIfPrimeOrNot(introduced_number);
    if (resultado == true) {
      std::cout << introduced_number << " is prime" << std::endl;
    } else {
      std::cout << introduced_number << " is not prime" << std::endl;
    }
  }
  return 0;
}