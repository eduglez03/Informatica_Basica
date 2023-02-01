/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Complex class Implementation
 */

#include "complex.h"

#include <cmath>
#include <iostream>

std::ostream& operator<<(std::ostream& out, const Complex& Complex) {
  if (Complex.imaginary_part() >= 0) {
    out << Complex.real_part() << " + " << Complex.imaginary_part() << "i";
  } else {
    out << Complex.real_part() << " - " << abs(Complex.imaginary_part()) << "i";
  }
  return out;
}

std::istream& operator>>(std::istream& in, Complex& Complex) {
  in >> Complex.real_part_;
  in >> Complex.imaginary_part_;
  return in;
}

/*
 * @brief Método para la suma de complejos
 * @param[in] kComplex1: referencia (constante) al primer sumando
 * @param[in] kComplex2: referencia (constante) al segundo sumando
 */
Complex operator+(const Complex& kComplex1, const Complex& kComplex2) {
  Complex result{kComplex1.real_part() + kComplex2.real_part(), kComplex1.imaginary_part() + kComplex2.imaginary_part()};
  return result;
}

/*
 * @brief Método para la resta de complejos
 * @param[in] kComplex1: referencia (constante) al primer complejo
 * @param[in] kComplex2: referencia (constante) al segundo complejo
 */
Complex operator-(const Complex& kComplex1, const Complex& kComplex2) {
  Complex result{kComplex1.real_part() - kComplex2.real_part(), kComplex1.imaginary_part() - kComplex2.imaginary_part()};
  return result;
}

/**
 * @brief Método para comparar y ver si los complejos son iguales.
 *
 * @param complejo1 primer complejo
 * @param complejo2 segundo complejo
 * @return true
 * @return false
 */
bool operator==(Complex complex1, Complex complex2) {
  if (complex1.imaginary_part() == complex2.imaginary_part()) {
    if (complex1.real_part() == complex2.real_part()) {
      return true;
    }
  }
  return false;
}
