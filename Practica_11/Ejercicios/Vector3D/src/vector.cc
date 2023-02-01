/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Vector class Implementation
 */

#include "vector.h"

#include <cmath>
#include <iostream>

std::ostream& operator<<(std::ostream& out, const Vector& Vector) {
  out << "(" << Vector.x() << ", " << Vector.y() << ", " << Vector.z() << ")";
  return out;
}

bool operator==(const Vector& kVector1, const Vector& kVector2) {
  if (kVector1.x() == kVector2.x() && kVector1.y() == kVector2.y() &&
      kVector1.z() == kVector2.z()) {
    return true;
  }
  return false;
}

/*
 * @brief vector addition
 * @param[in] kVector1: referencia (constante) al primer sumando
 * @param[in] kVector2: referencia (constante) al segundo sumando
 */
Vector operator+(const Vector& kVector1, const Vector& kVector2) {
  Vector result{kVector1.x() + kVector2.x(), kVector1.y() + kVector2.y(), kVector1.z() + kVector2.z()};
  return result;
}

/*
 * @brief vector addition
 * @param[in] kVector1: referencia (constante) al primer sumando
 * @param[in] kVector2: referencia (constante) al segundo sumando
 */
Vector operator*(const double number, const Vector& kVector1) {
  Vector result{number * kVector1.x(), number * kVector1.y(), number * kVector1.z()};
  return result;
}

/*
 * @brief vector addition
 * @param[in] kVector1: referencia (constante) al primer sumando
 * @param[in] kVector2: referencia (constante) al segundo sumando
 */
double operator*(const Vector& kVector1, const Vector& kVector2) {
  double result{kVector1.x() * kVector2.x() + kVector1.y() * kVector2.y() + kVector1.z() * kVector2.z()};
  return result;
}

/*
 * @brief vector addition
 * @param[in] kVector1: referencia (constante) al primer sumando
 * @param[in] kVector2: referencia (constante) al segundo sumando
 */
Vector Vector::operator!() {
  double pow_x{x_ * x_};
  double pow_y{y_ * y_};
  double pow_z{z_ * z_};
  double module{sqrt(pow_x + pow_y + pow_z)};
  Vector result{x_ / module, y_ / module, z_ / module};
  return result;
}

/*
 * @brief vector addition
 * @param[in] kVector1: referencia (constante) al primer sumando
 * @param[in] kVector2: referencia (constante) al segundo sumando
 */
double Vector::operator-() {
  double pow_x{x_ * x_};
  double pow_y{y_ * y_};
  double pow_z{z_ * z_};
  double module{sqrt(pow_x + pow_y + pow_z)};
  return module;
}
