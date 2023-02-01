/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Dec 20 2021
 * @brief Vector class Implementation
 */

#include <iostream>

#include "vector.h"

/*
 * @brief vector addition 
 * @param[in] vector1: referencia (constante) al primer sumando
 * @param[in] vector2: referencia (constante) al segundo sumando
 */
Vector operator+(const Vector& vector1, const Vector& vector2) {
  Vector result{vector1.x() + vector2.x(), vector1.y() + vector2.y(), vector1.z() + vector2.z()};

  return result;
}
