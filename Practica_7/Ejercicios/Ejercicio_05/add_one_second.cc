/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_seconds.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Write a program that adds one second to a clock time, given its hours, minutes and seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279
  */

#include<iostream>
using namespace std;

void imprimirdatos (int horas, int minutos, int segundos) {
  using namespace std;
  cout.fill ('0'); cout.width (2); cout << horas << ":";
  cout.fill ('0'); cout.width (2); cout << minutos << ":";
  cout.fill ('0'); cout.width (2); cout << segundos << endl;
}

int main() {
  int horas, minutos, segundos;
  // cout << "Introduzca horas: ";
  cin >> horas;
  //cout << "Introduzca minutos: ";
  cin >> minutos;
  //cout << "Introduzca segundos: ";
  cin >> segundos;
  if (horas >= 00 && horas <= 23 && minutos >= 00 && minutos <= 59 && segundos >= 00 && segundos <= 59) {
    segundos++;
    if (segundos == 60) {
      segundos = 00;
      minutos++;
      if (minutos == 60) {
        minutos = 00;
        horas++;
        if (horas == 24) horas = 00;
      }
    }
    
  }
  imprimirdatos (horas, minutos, segundos);
  return 0;
}


