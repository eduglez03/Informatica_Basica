// ENUNCIADO PROBLEMA: https://jutge.org/problems/P52847_en

#include<iostream>

int main() {
  int vector_numeros[4] = {};
  int valor_maximo{0};

  std::cout << "Introduzca tres valores enteros: " << std::endl;
  std::cin >> vector_numeros[1] >> vector_numeros[2] >> vector_numeros[3];

  if (vector_numeros[1] > vector_numeros[2] && vector_numeros[3]) {
    valor_maximo = vector_numeros[1];
  } else if (vector_numeros[2] > vector_numeros[1] && vector_numeros[3]) {
      valor_maximo = vector_numeros[2];
    } else {
        valor_maximo = vector_numeros[3];
        
  std::cout << valor_maximo;
  
  return 0;
}