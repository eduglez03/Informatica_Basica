#include<iostream>

#include"Ejercicio_4.h"

int main() {
  int year{0};
  bool resultado;

  std::cout << "Introduzca un año para saber si es o no bisiesto: " << std::endl;
  std::cin >> year;

  resultado = EsBisiesto(year);

  if(resultado == 1) {
    std::cout << year << " es un año bisiesto" << std::endl;
  } else {
      std::cout << year << " no es un año bisiesto" << std::endl;
  }
  
  return 0;
}