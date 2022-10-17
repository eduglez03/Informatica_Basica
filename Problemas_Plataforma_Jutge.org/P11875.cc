// ENUNCIADO PROBLEMA: https://jutge.org/problems/P11875_en

#include<iostream>

int main() {
  int numero_digitos{0};
  int digitos[numero_digitos] = {};
  int numero_convinaciones = numero_digitos;

  std::cout << "Introduzca el número de digitos que quiere emplear: " << std::endl;
  std::cin >> numero_digitos;

  std::cout << "Introduzca los " << numero_digitos << " digitos: " << std::endl;

  for (int i = 0; i < numero_digitos;) {
    std::cin >> digitos[i];
    i++;
  }

  for (int i = 0; i < numero_digitos;) {
    
  }
  













  for (int i = 0; i < numero_digitos;) {
    std::cout << digitos[i];
    i++;
  }
  
  


  return 0;
}