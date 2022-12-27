#include<iostream>

int main() {
  int numero_introducido{0};
  int contador{0};
  int resultado{0};

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero_introducido;

  while(contador <= numero_introducido) {
    contador++;
    resultado = resultado + contador;
  }

  std::cout << resultado << std::endl;

  return 0;
}