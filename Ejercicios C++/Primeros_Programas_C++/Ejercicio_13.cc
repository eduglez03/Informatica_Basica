#include<iostream>

int Sumar(const int numero) {
  int suma{0};
  
  suma = (numero * (numero + 1)) / 2;

  return suma;
}

int main() {
  int numero_introducido{0};
  int resultado{0};

  std::cout << "Introduzca un número natural: " << std::endl;
  std::cin >> numero_introducido;

  resultado = Sumar(numero_introducido);

  std::cout << resultado << std::endl;

  return 0;
}