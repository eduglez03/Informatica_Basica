// ENUNCIADO PROBLEMA: https://jutge.org/problems/P36668_en

#include<iostream>

int main() {
  int numero{0};
  int vector_cuadrados[numero] = {};
  int cuadrados{0};
  int suma{0};


  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  for (int i = 0; i <= numero;) {
    cuadrados = i * i;
    vector_cuadrados[i] = cuadrados;
    i++;
  }
  
  for (int i = 0; i <= numero; i++) {
    
  }
  






  return 0;
}