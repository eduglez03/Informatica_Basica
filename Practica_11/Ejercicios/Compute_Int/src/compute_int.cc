/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief ComputeInt
 */

#include "compute_int.h"

#include <cmath>
#include <iostream>
#include <vector>

/**
 * @brief Método para calcular el factorial.
 * @param number1
 * @return int
 */
int ComputeInt::Factorial(const int number1) const {
  int result{1};
  for (int counter = 1; counter <= number1; ++counter) {
    result *= counter;
  }
  return result;
}

/**
 * @brief Método para calcular la suma de una serie.
 * @param number1
 * @return int
 */
int ComputeInt::SumSeries(const int number1) const {
  int result{0};
  for (int counter = 1; counter <= number1; ++counter) {
    result += counter;
  }
  return result;
}

/**
 * @brief Método para ver si un número es un número de Armstrong.
 * @param number1
 * @return true
 * @return false
 */
bool ComputeInt::IsArmstrong(const int number1) const {
  int number_introduced_loop{number1};
  int counter{0};
  int result{0};
  std::vector<int> number_introduced;
  while (number_introduced_loop > 0) {
    number_introduced.emplace_back(number_introduced_loop % 10);
    number_introduced_loop = number_introduced_loop / 10;
    counter++;
  }
  for (const auto& element_of_number : number_introduced) {
    result = result + (pow(element_of_number, counter));
  }
  if (result == number1) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief Método para ver si un número es perfecto.
 * @param number1
 * @return true
 * @return false
 */
bool ComputeInt::IsPerfect(const int number1) const {
  bool result{false};
  int sum{0};
  for (int counter = 1; counter < number1; ++counter) {
    if (number1 % counter == 0) {
      sum += counter;
    }
  }
  if (sum == number1) {
    result = true;
  }
  return result;
}

/**
 * @brief Método para ver si un número es primo.
 * @param number1
 * @return true
 * @return false
 */
bool ComputeInt::IsPrime(const int number1) const {
  if (number1 == 0 || number1 == 1) {
    return false;
  }
  for (int counter = 2; counter <= sqrt(number1); ++counter) {
    if (number1 == 2) {
      return true;
    } else if (number1 % counter == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Método para ver si un número es primo y perfecto.
 * @param number1
 * @return true
 * @return false
 */
bool ComputeInt::IsPerfectPrime(int number1) const {
  int sum_result{0};
  int loop_number{number1};
  int last_number;
  while (IsPrime(number1) == true) {
    loop_number = number1;
    last_number = number1;
    sum_result = 0;
    while (loop_number > 0) {
      sum_result = sum_result + (loop_number % 10);
      loop_number = loop_number / 10;
    }
    number1 = sum_result;
    if (last_number == number1) {
      return true;
    }
  }
  return false;
}

/**
 * @brief Método para ver sin un número está equilibrado respecto a los pares e impares.
 * @param number1
 * @return true
 * @return false
 */
bool ComputeInt::IsBalanced(const int number1) const {
  bool is_equal = false;
  int loop_number{number1};
  std::vector<int> vector_numbers;
  int odd_sum{0}, pair_sum{0};
  while (loop_number > 0) {
    vector_numbers.emplace_back(loop_number % 10);
    loop_number = loop_number / 10;
  }
  for (int counter = 0; counter < vector_numbers.size(); ++counter) {
    if ((counter + 1) % 2 == 0) {
      pair_sum = pair_sum + vector_numbers.at(counter);
    } else {
      odd_sum = odd_sum + vector_numbers.at(counter);
    }
  }
  if (pair_sum == odd_sum) {
    is_equal = true;
  } else {
    is_equal = false;
  }
  return is_equal;
}

/**
 * @brief Ver si dos números son primos relativos
 * @param Knumber1 primer número
 * @param kNumber2 segundo número
 * @return true
 * @return false
 */
bool ComputeInt::AreRelativesPrimes(const int kNumber1, const int kNumber2) const {
  if (kNumber1 == 0 || kNumber2 == 0) {
    return false;
  }
  int divisor;
  std::vector<int> divisors_of_number1;
  std::vector<int> divisors_of_number2;
  /// Calcular los divisores de kNumber1
  for (divisor = 1; divisor * divisor < kNumber1; ++divisor) {
    if (kNumber1 % divisor == 0) {
      divisors_of_number1.push_back(divisor);
    }
  }
  if (divisor - (kNumber1 / divisor) == 1) {
    --divisor;
  }
  for (; divisor >= 1; --divisor) {
    if (kNumber1 % divisor == 0) {
      divisors_of_number1.push_back(kNumber1 / divisor);
    }
  }
  /// Calcular los divisores de kNumber2
  for (divisor = 1; divisor * divisor < kNumber2; ++divisor) {
    if (kNumber2 % divisor == 0) {
      divisors_of_number2.push_back(divisor);
    }
  }
  if (divisor - (kNumber2 / divisor) == 1) {
    --divisor;
  }
  for (; divisor >= 1; --divisor) {
    if (kNumber2 % divisor == 0) {
      divisors_of_number2.push_back(kNumber2 / divisor);
    }
  }
  /// Comparar los divisores en busca de dos iguales.
  int divisors_of_number1_size = divisors_of_number1.size() - 1;
  int divisors_of_number2_size = divisors_of_number2.size() - 1;
  int counter{1};
  for (; counter <= divisors_of_number1_size; ++counter) {
    for (int counter2{1}; counter2 <= divisors_of_number2_size; ++counter2) {
      if (divisors_of_number1[counter] == divisors_of_number2[counter2]) {
        return false;
      }
    }
  }
  return true;
}
