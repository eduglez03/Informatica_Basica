/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Sum_of_fractions.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads triples of natural numbers a, b and k, and for each one computes and prints the result of (1/a) + (1/a+k)+ (1/a+2k) + ...
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P76024_en
  */

#include <iomanip>
#include <iostream>

double Fraccion(int primer_numero, int limite, int numero_a_sumar) {
  double suma{0.0};
  int contador{0};
  while ((primer_numero + contador * numero_a_sumar) <= limite) {
    suma += 1.0 / double(primer_numero + contador * numero_a_sumar);
    ++contador;
  }
  return suma;
}

int main() {
  int primer_numero, limite, numero_a_sumar;
  while (std::cin >> primer_numero >> limite >> numero_a_sumar) {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    std::cout << std::fixed << std::setprecision(4) << Fraccion(primer_numero, limite, numero_a_sumar) << std::endl;
  }
  return 0;
}