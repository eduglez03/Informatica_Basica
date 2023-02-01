/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Complex class Definition
 */

#ifndef Complex_H
#define Complex_H

#include <ostream>
/**
 * @brief Complex type
 */
class Complex {
 public:
  Complex() : real_part_{0}, imaginary_part_{0} {}
  Complex(int real_part, int imaginary_part) : real_part_{real_part}, imaginary_part_{imaginary_part} {}
  int real_part() const { return real_part_; }  // Getters
  int imaginary_part() const { return imaginary_part_; }
  friend std::istream& operator>>(std::istream& in, Complex& Complex);

 private:
  int real_part_;
  int imaginary_part_;
};

/// Se necesita definir el prototipo de operator+ para poder usar esa función en
/// otros ficheros (para que se sepa que esa sobrecarga está definida)
std::ostream& operator<<(std::ostream& out, const Complex& Complex);
Complex operator+(const Complex& kComplex1, const Complex& kComplex2);
Complex operator-(const Complex& kComplex1, const Complex& kComplex2);

#endif
