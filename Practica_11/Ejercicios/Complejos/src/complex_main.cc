/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief clase Complex
 */

#include <iostream>

#include "complex.h"

int main() {
  Complex complex1{}, complex2{};
  std::cout << "complex1 = ";
  std::cin >> complex1;
  std::cout << "complex2 = ";
  std::cin >> complex2;
  Complex result;
  result = complex1 + complex2;
  std::cout << "complex1 + complex2 = " << result << std::endl;
  result = complex1 - complex2;
  std::cout << "complex1 - complex2 = " << result << std::endl;
  return 0;
}
