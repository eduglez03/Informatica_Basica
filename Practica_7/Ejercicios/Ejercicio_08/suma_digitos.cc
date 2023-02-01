/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file suma_digitos.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that reads several numbers and prints the sum of the digits of each one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33839
  */

#include <iostream>
using namespace std;
int suma_digitos(int n);
int main() {
  int numero;
  //cout << "Este programa lee un numero y calcula la suma de sus digitos." << endl;
  //cout << "Por favor, introduzca un numero entero positivo: "; 
  while (cin >> numero) {
    cout << "The sum of the digits of " << numero << " is " << suma_digitos(numero) << "." << endl;
  }
  return 0;
}

int suma_digitos(int n) {
  int suma = 0;
  if (n < 0) n = -n;
  while (n != 0) {
    suma += n % 10;
    n = n / 10;
  }
  return suma;
}
