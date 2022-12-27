#include<iostream>

int main() {
  int numero_introducido{0};

  std::cout << "Introduzca un número entero" << std::endl;
  std::cin >> numero_introducido;

  if(numero_introducido % 2 == 0) {
    std::cout << "Su número es par" << std::endl;
  } else {
    std::cout << "Su número es impar" << std::endl;
  }
  
  return 0;
}