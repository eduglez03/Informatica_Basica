/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Caesar_cipher.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Write a program that encrypts messages with the “Caesar cipher”, used by Julius Caesar to communicate with his generals. 
  * Given a constant k, each letter of the original message is replaced by the letter that is alphabetically k positions to its right (circularly, if needed). 
  * For instance, if k = 5, we must change ‘a’ by ‘f’, ‘b’ by ‘g’, …, ‘y’ by ‘d’, and ‘z’ by ‘e’.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33371_en
  */

#include <iostream>
// Las variables no son significativas porque así lo pedia el Jutge.
char codificado(char c, int k) {
  if (c == '_')
    return ' ';
  else if (c == '.')
    return '\n';
  if (c <= 'z' and c >= 'a') {
    k = k % ('z' - 'a' + 1);
    c -= 'a';
    c += k;
    c = c % ('z' - 'a' + 1);
    c += 'A';
  }
  return c;
}

int main() {
  int k;
  while (std::cin >> k) {
    char c = 'a';
    while (c != '.') {
      std::cin >> c;
      std::cout << codificado(c, k);
    }
  }
}