/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file intervalos.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that, given two intervals, computes the interval corresponding to their intersection, or tells that it is empty.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51126
  */

#include<iostream>
#include<algorithm>
#include<array>

int MuestraInterseccion(std::array<int, 2> primer_intervalo, std::array<int, 2> segundo_intervalo) {
    if ((primer_intervalo[1] < segundo_intervalo[0]) || (segundo_intervalo[1] < primer_intervalo[0])) {
        std::cout << "[]" << std::endl;
    } else {
        std::cout << "[" << std::max(primer_intervalo[0], segundo_intervalo[0]) << "," << std::min(primer_intervalo[1], segundo_intervalo[1]) << "]" << std::endl;
    }
    return 0;
}

int main() {
  int minimo_primer_intervalo, maximo_primer_intervalo, minimo_segundo_intervalo, maximo_segundo_intervalo;
  std::cin >> minimo_primer_intervalo >> maximo_primer_intervalo >> minimo_segundo_intervalo >> maximo_segundo_intervalo;
  std::array<int, 2> primer_intervalo{minimo_primer_intervalo, maximo_primer_intervalo};
  std::array<int, 2> segundo_intervalo{minimo_segundo_intervalo, maximo_segundo_intervalo};
  MuestraInterseccion(primer_intervalo, segundo_intervalo);
  return 0;
}