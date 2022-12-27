#include<iostream>

int Factorial(const int numero) {
  int factorial{1};
  int contador{0};

  while(contador <= numero) {
    contador++;
    factorial = factorial * contador;
  }
  
  return factorial;
}

int main() {
  int numero_introducido{0};
  int resultado{0};

  std::cout << "Introduzca un número al que calcular el factorial: " << std::endl;
  std::cin >> numero_introducido;

  resultado = Factorial(numero_introducido);

  return 0;
}