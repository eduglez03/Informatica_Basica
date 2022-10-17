/*Escriba un programa dividers.cc que solicite al usuario un número e imprima en pantalla todos los divisores del número introducido*/

#include<iostream>
#include<vector>

int main() {
  int numero_introducido{0};
  int divisores[] = {};
  int posicion_vector{0};



  std::cout << "Introduzca un número entero: " << std::endl;
  std::cin >> numero_introducido;

  for( int i = 1; i <= numero_introducido; i++ ) {
    while(numero_introducido % i == 0) {
      divisores[posicion_vector] = {i};
      posicion_vector++;
      i++;
    }
  }
  
  for (int i = 0; i < posicion_vector + 1; i++) {
    std::cout << divisores[i] << "; ";
    i++;
  }

  return 0;
}

