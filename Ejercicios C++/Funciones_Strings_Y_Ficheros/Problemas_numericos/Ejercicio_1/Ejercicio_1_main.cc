#include<iostream>

#include"Ejercicio_1.h"

int main() {
  int numero1{0};
  int numero2{0};
  int numero3{0};
  bool resultado;

  std::cout << "Introduzca tres números: " << std::endl;
  std::cin >> numero1 >> numero2 >> numero3;

  resultado = EsPitagorico(numero1, numero2, numero3);

  if(resultado == 1) {
    std::cout << "Es un trío pitagórico" << std::endl;
  } else{
    std::cout << "No es un trío pitagórico" << std::endl;
  }
  
  return 0;
}