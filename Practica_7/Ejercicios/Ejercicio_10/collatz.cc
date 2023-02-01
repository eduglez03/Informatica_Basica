/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file collatz.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Nov 18 2021
  * @brief Let n be any strictly positive natural number. Consider the following process. If n is an even number, we divide it by two. 
  * Otherwise, we multiply it by 3 and add 1 to it. When we reach 1, we stop. For instance, starting with 3, we obtain the sequence 3,  10,  5,  16,  8,  4,  2,  1 . 
  * Since 1937 it is conjectured that this process ends for any initial n, although nobody has been able to prove it. In this problem, we do not ask you for a proof. 
  * You only have to write a program that prints the number of steps that it takes to reach 1 for every given n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
using namespace std;
int main() {
  int ans;
  while (cin >> ans) {
    int contador = 0;
    while (ans != 1) {
      ++contador;
      if (ans % 2 == 1) {
        ans = (3 * ans) + 1;
      } else {
        ans /= 2;
      }
    }
    cout << contador << endl;
  }
  return 0;
}