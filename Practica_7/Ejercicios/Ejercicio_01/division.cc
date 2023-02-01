/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file division.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
using namespace std;
int main() {
  // cout << "Este programa muestra en pnatalla el resultado y el resto de la
  // division de dos numeros introducidos por el usuario" << endl;
  int numero_1, numero_2, resultado, resto;
  /*cout << "Introduzca el primer numero: ";*/cin >> numero_1;
  /*cout << "Introduzca el segundo numero: ";*/cin >> numero_2;
  if (numero_2 > 0) {
    resultado = numero_1 / numero_2;
    resto = numero_1 % numero_2;
    /*cout << "\nEl resultado de la division es: " */cout << resultado << " " << resto << endl;
    /*cout << "\nEl resto de la division es: " */
  } else {
    // cout << "El segundo numero debe ser mayor que 0" << endl;
  }
  return 0;
}