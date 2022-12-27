#include<iostream>

int main() {
  int numero_introducido{0};

  std::cout << "Introduzca ha que potencia de 2 quiere calcular: " << std::endl;
  std::cin >> numero_introducido;

  for(int i = 0; i <= numero_introducido;) {
    int potencia{0};
    potencia = pow(2, i);
    std::cout << potencia << " ";
    i++;
  }

  return 0;
}