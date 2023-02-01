/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Este es un programa que ejecuta la conjetura de Collatz
 */

#include "collatz_conjecture.h"

#include <stdexcept>
namespace collatz_conjecture {
int steps(int numero) {
  if (numero <= 0) {
    throw std::domain_error("Number must be > 0");
  }
  static int _steps{0};
  if (numero == 1) {
    int resto = _steps;
    _steps = 0;
    return resto;
  }
  ++_steps;
  if (numero % 2 == 0) return steps(numero / 2);
  return steps(numero * 3 + 1);
}
}  // namespace collatz_conjecture
