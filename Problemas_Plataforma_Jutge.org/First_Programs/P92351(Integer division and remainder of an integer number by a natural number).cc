// ENUNCIADO PROBLEMA: https://jutge.org/problems/P92351_en

#include<iostream>

int main() {
  int a;
  int b;
  int resto;
  int division;

  std::cout << "Introduzca dos números a y b, debiendo ser b > a: " << std::endl;
  std::cin >> a >> b;

  division = a / b;
  resto = a % b;

  std::cout << "El resultado de la división de a / b es:  " << division << " y el resto es: " << resto << std::endl;
  
  return 0;
}