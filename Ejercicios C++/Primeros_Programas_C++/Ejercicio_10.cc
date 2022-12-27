#include<iostream>

int main() {
  int numero_introducido{0};

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero_introducido;

  for(int i = 1; i <= numero_introducido) {
    if(numero_introducido % i == 0) {
      std::cout << i;
    }
    i++;
  }

  return 0;
}