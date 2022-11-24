/*Escriba un programa dividers.cc que solicite al usuario un número e imprima en pantalla todos los divisores del número introducido*/

#include<iostream>
#include<vector>

int main() {
  int numero_introducido{0};
  std::vector<int>divisores;
  int auxiliar{0};

  std::cout << "Introduzca un número entero: " << std::endl;
  std::cin >> numero_introducido;

  for(int i = 1; i <= numero_introducido;) {
    if (numero_introducido % i != 0) {
      i++;
    } else {
      auxiliar = numero_introducido / i;
      divisores.push_back(auxiliar);
      i++;  
    }
  }

  for (int i = 0; i < divisores.size();) {
    std::cout << divisores[i] << std::endl;
    i++;
  }
  return 0;
}

