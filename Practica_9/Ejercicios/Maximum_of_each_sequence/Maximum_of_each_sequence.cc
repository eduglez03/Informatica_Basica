/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Maximum_of:each_sequence.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that reads sequences of integer numbers and prints the maximum value of each sequence.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71753_en
  */

#include <iostream>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        int m, mx;
        cin >> mx;
        for (int i = 1; i < n; i++) {
            cin >> m;
            mx = max(m,mx);
        }
        cout << mx << endl;
    }
}