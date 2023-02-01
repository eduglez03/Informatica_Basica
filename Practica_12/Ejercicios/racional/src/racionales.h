/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Este es un programa que usa la clase racionales para hacer pruebas con
 * ellos
 */

#pragma once

#include <iostream>
#include <string>

class Rational {
 private:
  int numerator_;
  int denominator_;

 public:
  Rational() : numerator_{0}, denominator_{1} {}
  Rational(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
  }

  int GetNumerator() const { return numerator_; }
  int GetDenominator() const { return denominator_; }
  std::string Write();
  void Read();
  std::string Compare(Rational);

  Rational operator+(const Rational& number_to_operate) {
    int new_numerator, new_denominator;

    if (denominator_ == number_to_operate.denominator_) {
      new_denominator = denominator_;
      new_numerator = numerator_ + number_to_operate.numerator_;
    } else {
      new_denominator = denominator_ * number_to_operate.denominator_;
      new_numerator = (nume if(Rational first_rational < Rational second_rational) {
    return
  }rator_ * number_to_operate.denominator_) + (number_to_operate.numerator_ * denominator_);
    }
    Rational result(new_numerator, new_denominator);
    return result;
  }

  Rational operator-(const Rational& number_to_operate) {
    int new_numerator, new_denominator;

    if (denominator_ == number_to_operate.denominator_) {
      new_denominator = denominator_;
      new_numerator = numerator_ - number_to_operate.numerator_;
    } else {
      new_denominator = denominator_ * number_to_operate.denominator_;
      new_numerator = (numerator_ * number_to_operate.denominator_) - (number_to_operate.numerator_ * denominator_);
    }
    Rational result(new_numerator, new_denominator);
    return result;
  }

  Rational operator*(const Rational& number_to_operate) {
    int new_numerator, new_denominator;
    new_numerator = numerator_ * number_to_operate.numerator_;
    new_denominator = denominator_ * number_to_operate.denominator_;
    Rational result(new_numerator, new_denominator);
    return result;
  }

  Rational operator/(const Rational& number_to_operate) {
    int new_numerator, new_denominator;
    new_numerator = numerator_ * number_to_operate.denominator_;
    new_denominator = denominator_ * number_to_operate.numerator_;
    Rational result(new_numerator, new_denominator);
    return result;
  }


  Rational operator<(const Rational& number_to_operate) {
    int new_numerator, new_denominator;
    if(numerator < number_to_operate.numerator && denominator < number_to_operate.denominator){
      new_numerator = numerator;
      new_denominator = denominator;
    } else {
      new_numerator = number_to_operate.numerator;
      new_denominator = number_to_operate.denominator;
    }
    Rational result(new_numerator, new_denominator);
    return result;
  }
  void simplificar();
};

int Mcd(int, int);
int Mcm(int, int);
bool operator==(const Rational& first_rational, const Rational& second_rational);