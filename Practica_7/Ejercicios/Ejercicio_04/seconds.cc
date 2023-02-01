/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file seconds.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that converts to seconds a given amount of years, days, hours, minutes and seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P70955
  */


#include <iostream>
#include<vector>
using namespace std;

int main() {
  int anios, dias, horas, minutos, segundos, numero;
  //cout << "Introduzca los anios: "; 
  cin >> anios;
  //cout << "Introduzca los dias: "; 
  cin >> dias;
  //cout << "Introduzca las horas: "; 
  cin >> horas;
  //cout << "Introduzca los minutos: "; 
  cin >> minutos;
  //cout << "Introduzca los segundos: "; 
  cin >> segundos;
  anios = anios * 31536000;
  dias = dias * 86400;
  horas = horas * 3600;
  minutos = minutos * 60;
  numero = anios + dias + horas + minutos + segundos;
  /*cout << "El numero total es: "*/
  cout << numero << endl;
  return 0;
}