/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief this program makes operations with complex numbers
 */

#include "complex.h"

#include <cmath>
#include <iostream>

namespace complex_numbers {

std::ostream& operator<<(std::ostream& out, const Complex& Complex) {
  if (Complex.imag() >= 0) {
    out << Complex.real() << " + " << Complex.imag() << "i";
  } else {
    out << Complex.real() << " - " << abs(Complex.imag()) << "i";
  }
  return out;
}

std::istream& operator>>(std::istream& in, Complex& Complex) {
  in >> Complex.real_part_;
  in >> Complex.imaginary_part_;
  return in;
}
/**
 * @brief says if two complex are both the same or not
 * @param[in] Complex1: reference (const) to first complex
 * @param[in] Complex2: reference (const) to second Complex
 * @return true if they are the same
 * @return false if they are not the same
 */

bool operator==(Complex Complex1, Complex Complex2) {
  if (Complex1.imag() == Complex2.imag()) {
    if (Complex1.real() == Complex2.real()) {
      return true;
    }
  }
  return false;
}

/**
 * @brief complex addition
 * @param[in] Complex1: reference (const) to first complex
 * @param[in] Complex2: reference (const) to second Complex
 * @return result the addition between both
 */
Complex operator+(const Complex& kComplex1, const Complex& kComplex2) {
  Complex result{kComplex1.real() + kComplex2.real(), kComplex1.imag() + kComplex2.imag()};
  return result;
}

/**
 * @brief complex substraction
 * @param[in] Complex1: reference (const) to first complex
 * @param[in] Complex2: reference (const) to second Complex
 * @return result: the substraction between both
 */
Complex operator-(const Complex& kComplex1, const Complex& kComplex2) {
  Complex result{kComplex1.real() - kComplex2.real(), kComplex1.imag() - kComplex2.imag()};
  return result;
}

/**
 * @brief complex multiply
 * @param[in] Complex1: reference (const) to first complex
 * @param[in] Complex2: reference (const) to second Complex
 * @return result: the addition of both parts multiply by eachother
 */

Complex operator*(const Complex& complex1, const Complex& complex2) {
  double new_real = ((complex1.real_part_ * complex2.real_part_) - (complex1.imaginary_part_ * complex2.imaginary_part_));
  double new_imaginary = ((complex1.real_part_ * complex2.imaginary_part_) + (complex1.imaginary_part_ * complex2.real_part_));
  Complex new_complex{new_real, new_imaginary};
  return new_complex;
}

/**
 * @brief complex division
 * @param[in] Complex1: reference (const) to first complex
 * @param[in] Complex2: reference (const) to second Complex
 * @return result: the substraction of both parts divided by eachother
 */
Complex operator/(const Complex& complex1, const Complex& complex2) {
  double new_real = ((complex1.real_part_ * complex2.real_part_) + (complex1.imaginary_part_ * complex2.imaginary_part_)) / (std::pow(complex2.real_part_, 2) + std::pow(complex2.imaginary_part_, 2));
  double new_imaginary = ((complex1.imaginary_part_ * complex2.real_part_) - (complex1.real_part_ * complex2.imaginary_part_)) / (std::pow(complex2.real_part_, 2) + std::pow(complex2.imaginary_part_, 2));
  Complex new_complex{new_real, new_imaginary};
  return new_complex;
}

/**
 * @brief absolute value
 * @param[in] int real_part of the complex
 * @param[in] int imaginary part of the complex
 * @return the absolute value of the complex
 */

double Complex::abs() const {
  return std::sqrt(pow(real_part_, 2) + pow(imaginary_part_, 2));
}
/**
 * @brief complex conj
 * @param[in] int real part of the complex
 * @param[in] int imaginary part of the complex
 * @return result: the conjugate of the complex
 */
Complex Complex::conj() const {
  Complex new_complex{real_part_, imaginary_part_ * (-1)};
  return new_complex;
}

/**
 * @brief complex exponential
 * @param[in] int real part of the complex
 * @param[in] int imaginary part of the complex
 * @return exponential complex
 */

Complex Complex::exp() const {
  return Complex{std::exp(real_part_) * std::cos(imaginary_part_), std::exp(real_part_) *std::sin(imaginary_part_)};
}
}  // namespace complex_numbers
