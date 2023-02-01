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

#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

#include <cmath>
#include <iostream>

namespace complex_numbers {

class Complex {
 public:
  Complex() : real_part_{0}, imaginary_part_{0} {}
  Complex(double real_part, double imaginary_part)
      : real_part_{real_part}, imaginary_part_{imaginary_part} {}
  double real() const { return real_part_; }
  double imag() const { return imaginary_part_; }
  void SetComplex(const double& input_real, const double& input_imaginary) {
    real_part_ = input_real;
    imaginary_part_ = input_imaginary;
  }

  double abs() const;
  Complex conj() const;
  Complex exp() const;
  friend std::istream& operator>>(std::istream& in, Complex& complex);
  friend Complex operator*(const Complex& Complex1, const Complex& complex2);
  friend Complex operator/(const Complex& complex1, const Complex& complex2);

 private:
  double real_part_;
  double imaginary_part_;
};

std::ostream& operator<<(std::ostream& out, const Complex& Complex);
bool operator==(Complex complejo1, Complex complejo2);
Complex operator+(const Complex& kComplejo1, const Complex& kComplejo2);
Complex operator-(const Complex& kComplejo1, const Complex& kComplejo2);
Complex operator/(const Complex& kComplejo1, const Complex& kComplejo2);
Complex operator*(const Complex& kComplejo1, const Complex& kComplejo2);
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
