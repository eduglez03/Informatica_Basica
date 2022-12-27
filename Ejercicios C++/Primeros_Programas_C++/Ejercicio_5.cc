#include<iostream>

int main() {
  double valor1{0};
  double valor2{0};
  double valor3{0};
  double valor4{0};
  double promedio{0};

  std::cout << "Introduzca el valor de los 4 valores con los que quiere calcular la media: " << std::endl;
  std::cin >> valor1 >> valor2 >> valor3 >> valor4;

  promedio = (valor1 + valor2 + valor3 + valor4) / 4;

  std::cout << "El valor promedio es de: " << promedio << std::endl;

  return 0;
}