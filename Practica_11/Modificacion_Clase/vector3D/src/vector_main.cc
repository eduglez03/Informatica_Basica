/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Dec 20 2021
 * @brief clase Vector
 *        este es un programa cliente que usa la clase 
 *
 */

#include <iostream>

#include "vector.h"
 
int main() {
  Vector vector1(1.0, 2.0, 3.0);
	// std::cout << vector1 << std::endl;
  // Vector vector2{vector1};
  Vector vector3;
  // vector3 = vector1 + vector2;       // vector3.operator=(operator+(vector1, vector2))
  // std::cout << vector3 << std::endl;
  // double c = vector1 * vector2;      // calls operator*(vector1, vector2)

  return 0;
}

