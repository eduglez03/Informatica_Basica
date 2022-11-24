// ENUNCIADO PROBLEMA: https://jutge.org/problems/P62421_es

#include<iostream>
#include<string.h>

int main() {
  std::string palabras1;
  std::string palabras2;
  std::string palabras3;

  std::cout << "Intruduzca tres palabras: " << std::endl;
  std::cin >> palabras1 >> palabras2 >> palabras3;

  std::cout << palabras3 << " " << palabras2 << " " << palabras1 << std::endl;

  std::cout << palabras1 << palabras2 << palabras3 << std::endl;


  return 0;
}