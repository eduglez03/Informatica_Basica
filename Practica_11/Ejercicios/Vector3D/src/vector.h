/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Vector class Definition
 */

#ifndef VECTOR_H
#define VECTOR_H
#include <ostream>
/**
 * @brief Vector type
 */
class Vector {
 public:
  Vector() : x_{0.0}, y_{0.0}, z_{0.0} {}
  Vector(double x, double y, double z) : x_{x}, y_{y}, z_{z} {}
  double x() const { return x_; }  // Getter
  double y() const { return y_; }
  double z() const { return z_; }
  double operator-();
  Vector operator!();

 private:
  double x_;  // The x component
  double y_;  // The y component
  double z_;  // The z component
};

/// Se necesita definir el prototipo de operator+ para poder usar esa función en
/// otros ficheros (para que se sepa que esa sobrecarga está definida)
std::ostream& operator<<(std::ostream& out, const Vector& Vector);
bool operator==(const Vector& kVector1, const Vector& kVector2);
Vector operator+(const Vector& kVector1, const Vector& kVector2);
Vector operator*(const double number, const Vector& kVector1);
double operator*(const Vector& kVector1, const Vector& kVector2);

#endif
