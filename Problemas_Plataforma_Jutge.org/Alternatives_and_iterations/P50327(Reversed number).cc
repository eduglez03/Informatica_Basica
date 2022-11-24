// ENUNCIADO PROBLEMA: https://jutge.org/problems/P50327_en

#include<iostream>
#include<algorithm>

int main() {
  int numero{0};
  int invertido{0};
  int auxiliar{0};

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  while(numero != 0) {
    auxiliar = numero % 10;
    invertido = invertido * 10 + auxiliar;
    numero /= 10;
  }

  std::cout << invertido << std::endl;
  
  return 0;
}



// ARREGLAR
