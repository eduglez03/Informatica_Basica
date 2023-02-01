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

#include "racionales.h"

#include <algorithm>
#include <iostream>
#include <string>
#include<math.h>

std::string Rational::Write() {
  std::string output = std::to_string(numerator_) + "/" + std::to_string(denominator_);
  return output;
}
/**
 * @brief reads the numerator and the denominator
 * @param[in] numerator: int with numerator value
 * @param[in] denominator: int with denominator value
 */
void Rational::Read() {
  std::cout << "[INPUT] numerator: " << std::endl;
  std::cin >> numerator_;

  do {
    std::cout << "[INPUT]: denominator: " << std::endl;
    std::cin >> denominator_;
    if (denominator_ == 0) {
      std::cerr << "[ERROR]: Denominator must not be zero!" << std::endl;
    }
  } while (denominator_ == 0);
}
std::string Rational::Compare(Rational number_to_operate) {
  std::string output;

  if (denominator_ == number_to_operate.denominator_) {
    if (numerator_ > number_to_operate.numerator_) {
      std::cout << numerator_ << "/" << denominator_ << " > " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " > " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    } else if (numerator_ < number_to_operate.numerator_) {
      std::cout << numerator_ << "/" << denominator_ << " < " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " < " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    } else {
      std::cout << numerator_ << "/" << denominator_ << " = " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " = " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    }
  } else {
    int first_number_new_denominator, first_number_new_numerator, second_number_new_denominator, second_number_new_numerator;
    first_number_new_denominator = denominator_ * number_to_operate.denominator_;
    // They are going to have the same denominator
    second_number_new_denominator = first_number_new_denominator;
    first_number_new_numerator = numerator_ * number_to_operate.denominator_;
    second_number_new_numerator = number_to_operate.numerator_ * denominator_;

    if (first_number_new_numerator > second_number_new_numerator) {
      std::cout << numerator_ << "/" << denominator_ << " > " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " > " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    } else if (first_number_new_numerator < second_number_new_numerator) {
      std::cout << numerator_ << "/" << denominator_ << " < " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " < " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    } else {
      std::cout << numerator_ << "/" << denominator_ << " = " << number_to_operate.numerator_ << "/" << number_to_operate.denominator_ << std::endl;
      output = "[RESULT]: " + std::to_string(numerator_) + "/" + std::to_string(denominator_) + " = " + std::to_string(number_to_operate.numerator_) + "/" + std::to_string(number_to_operate.denominator_);
    }
  }

  return output;
}
/**
 * @brief calculate the Mcm
 * @param[in] fist_number_to_operate: reference (const) to first complex
 * @param[in] second_number_to_operate: reference (const) to second Complex
 * @return Mcm
 */

int Mcm(int first_number_to_operate, int second_number_to_operate) {
  int max_number = std::max(first_number_to_operate, second_number_to_operate);
  int min_number = std::min(first_number_to_operate, second_number_to_operate);
  return (max_number / Mcd(max_number, min_number)) * min_number;
}

/**
 * @brief says if two rationals are both the same or not
 * @param[in] first_rational: reference (const) to Rational
 * @param[in] second_rational: reference (const) to Rational
 * @return true if they are the same
 * @return false if they are not the same
 */

bool operator==(const Rational& first_rational, const Rational& second_rational) {
  bool equal_numerator = (first_rational.GetNumerator() == second_rational.GetNumerator());
  bool equal_denominator = (first_rational.GetDenominator() == second_rational.GetDenominator());
  if (equal_numerator && equal_denominator) {
    return true;
  }
  return false;
}

bool operator<(const Rational& first_rational, const Rational& second_rational) {
  bool lower_numerator = (first_rational.GetNumerator() < second_rational.GetNumerator());
  bool lower_denominator = (first_rational.GetDenominator() < second_rational.GetDenominator());
  
}
/**
 * @brief calculate the Mcd
 * @param[in] first_number_to_operate: reference (const) to first complex
 * @param[in] second_number_to_operate: reference (const) to second Complex
 * @return the comun divisor
 */
int Mcd(int first_number_to_operate, int second_number_to_operate) {
  int comun = 0;
  int max_number = std::max(first_number_to_operate, second_number_to_operate);
  int min_number = std::min(first_number_to_operate, second_number_to_operate);

  do {
    comun = min_number;
    min_number = max_number % min_number;
    max_number = comun;
  } while (min_number != 0);

  return comun;
}


/*void simplificar() {
  int big{0};
  int small{0};
  if (numerator < denominator) {
    big = denominator;
    small = numerator;
  } else {
    big = numerator;
    small = denominator;
  }
  for (int i = 2; i < sqrt(big); i++) {
    if (big % i == 0 && small % i == 0) {
      return ((big / i), (small / i));
    }
  }
}*/
 