/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief ComputeInt
 *
 */

#include <cmath>
#include <iostream>
#include <vector>

#include "compute_int.h"

int main() {
  ComputeInt computation;
  std::cout << computation.Factorial(5) << std::endl;
  std::cout << computation.SumSeries(100) << std::endl;
  std::cout << computation.IsArmstrong(153) << std::endl;
  std::cout << computation.IsPerfect(28) << std::endl;
  std::cout << computation.IsPrime(13) << std::endl;
  std::cout << computation.IsPerfectPrime(977) << std::endl;
  std::cout << computation.IsBalanced(1463) << std::endl;
  std::cout << computation.AreRelativesPrimes(13, 17) << std::endl;
  return 0;
}
