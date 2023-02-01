/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file Balanced_numbers.cc
 * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
 * @date Dic 10 2021
 * @brief In this exercise, we say that a natural number is balanced if the sum of the digits in even 
 * positions is equal to the sum of the digits in odd positions. For instance, 1463 and 48015 are balanced numbers. Write a function that tells 
 * if a natural number n is balanced or not.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P26492_en
 */

#include <iostream>
#include <vector>

void StartMessage() {
  std::cout << "This program prints if a number introduced by user is balanced or not." << std::endl << std::endl;
}

bool is_balanced(int n) {
  bool balanced{0};
  int n_loop{n};
  std::vector<int> number_descomposed;
  int odd_sum{0}, even_sum{0};
  while (n_loop > 0) {
    number_descomposed.emplace_back(n_loop % 10);
    n_loop = n_loop / 10;
  }

  for (int counter = 0; counter < number_descomposed.size(); ++counter) { 
    if ((counter + 1) % 2 == 0) {
      even_sum = even_sum + number_descomposed.at(counter);
    } else {
      odd_sum = odd_sum + number_descomposed.at(counter);
    }
  }
  if (even_sum == odd_sum) {
    balanced = true;
  } else {
    balanced = false;
  }
  return balanced;
}

int main() {
  StartMessage();
  int number_introduced;
  while (std::cin >> number_introduced) {
    std::cout << is_balanced(number_introduced) << std::endl;
  }
  return 0;
}