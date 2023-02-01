/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Three_words.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 24 2021
  * @brief Write a program that reads three words a, b and c, and prints a line with c, b and a in this order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */

#include <iostream>
using namespace std;

int main() {
  string primera_letra, segunda_letra, tercera_letra;
  string letras[3] = {primera_letra, segunda_letra, tercera_letra};
  cout << "Introduzca la primera letra: ";
  cin >> primera_letra >> segunda_letra >> tercera_letra;
  cout << "Introduzca la segunda letra: ";
  cin >> segunda_letra;
  cout << "Introduzca la tercera letra: ";
  cin >> tercera_letra;
  cout << tercera_letra << " " << segunda_letra << " " << primera_letra << endl;
  return 0;
}