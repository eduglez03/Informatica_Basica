#include<iostream>

#include"Ejercicio_1.h"

bool EsPitagorico(const int &numero_1, const int &numero_2, const int &numero_3) {

  int numero_a{0};
  int numero_b{0};
  int numero_c{0};

  numero_a = numero_1 * numero_1;
  numero_b = numero_2 * numero_2;
  numero_c = numero_3 * numero_3;

  if(numero_a + numero_b == numero_c) {
    return true;
  } else {
    return false;
  }

}