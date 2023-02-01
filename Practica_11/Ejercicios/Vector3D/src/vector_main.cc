/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Clase Vector
 */

#include <iostream>

#include "vector.h"

int main() {
  Vector kVector1(1.0, 2.0, 3.0);
  Vector kVector2(3.0, 4.0, 5.0);
  std::cout << "Suma de dos vectores: " << kVector1 + kVector2 << std::endl;
  std::cout << "Multiplicación de un número por un vector: " << 2.0 * kVector1 << std::endl;
  std::cout << "Multiplicación de dos vectores: " << kVector1 * kVector2 << std::endl;
  std::cout << "Módulo del vector: " << -kVector1 << std::endl;
  std::cout << "Vector normalizado: " << !kVector1 << std::endl;
  return 0;
}
