/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file maximum.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that reads three numbers and prints their maximum. This exercise is slightly harder than P52847: “Maximum of three different integer numbers”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615
  */

#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, mayor;

  // cout << "Introduzca el primer numero (entero): ";
  cin >> n1;
  // cout << "Introduzca el segundo numero (entero): ";
  cin >> n2;
  // cout << "Introduzca el tercer numero (entero): ";
  cin >> n3;

  if (n1 > n2)

    if (n1 > n3)
      mayor = n1;
    else
      mayor = n3;

  else

      if (n2 > n3)
    mayor = n2;
  else
    mayor = n3;

  cout << mayor << endl;

  return 0;
}