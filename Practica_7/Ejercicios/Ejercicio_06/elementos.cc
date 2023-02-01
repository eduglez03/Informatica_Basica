/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file elemntos.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief El agua (A) vence a la piedra (P) que a su vez vence al viento (V) que vence al agua. Di quien gana el enfrentamiento, o si se produce un empate.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51352
  */

#include<iostream>
using namespace std;
int main() {
  char letra1, letra2;
  // cout << "Introduzca 'v', 'p' o 'a': "; 
  cin >> letra1;
  // cout << "Introduzca de nuevo una de las letras anteriores: "; 
  cin >> letra2;
  const char KAgua{'A'};
  const char KViento{'V'};
  const char KPiedra{'P'}; 

  if (letra1 == letra2) {
      cout << "-" << endl;
  }
  if ((letra1 == KAgua) and (letra2 == KPiedra)) {
      cout << "1" << endl; 
  }
  if ((letra1 == KPiedra) and (letra2 == KViento)) {
      cout << "1" << endl;
  }
  if ((letra1 == KViento) and (letra2 == KAgua)) {
      cout << "1" << endl;
  }
  if ((letra1 == KAgua) and (letra2 == KViento)) {
      cout << "2" << endl;
  }
  if ((letra1 == KViento) and (letra2 == KPiedra)) {
      cout << "2" << endl;
  }
  if ((letra1 == KPiedra) and (letra2 == KAgua)) {
      cout << "2" << endl;
  }
 return 0;
}

