// ENUNCIADO PROBLEMA: https://jutge.org/problems/P36668_en


#include<iostream>

int main() {
  int numero{0};
  int resultado{0};

  std::cout << "Introduzca un número natural: " << std::endl;
  std::cin >> numero;

  for (int i = 1; i <= numero;){
    int cuadrados{0};
    cuadrados = i * i;
    resultado = resultado + cuadrados;
    i++; 
  }

  std::cout << resultado << std::endl;
  
  return 0;
}