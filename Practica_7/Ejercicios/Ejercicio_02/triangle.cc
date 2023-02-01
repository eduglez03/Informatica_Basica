/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file triangle.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that, given a number n, prints a “triangle of size n”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29973
  */
#include <iostream>

using namespace std;
int main() {
  int lineas;
  //cout << "Ingresa la cantidad de líneas para el triángulo: ";
  cin >> lineas;
  int i;
  for (i = 1; i <= lineas; i++) {
    int j;
    for (j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}