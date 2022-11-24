// ENUNCIADO PROBLEMA: https://jutge.org/problems/P59539_en

#include<iostream>
#include<vector>

int main() {
  int numero{0};
  double fraccion;
  std::vector<double>fracciones;
  double suma;

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  for (int i = 1; i <= numero;) {
    fraccion = 1 / i;
    fracciones.push_back(fraccion);
    i++;
  }
    std::cout << fracciones[4];
  
  for (int i = 0; i <= fracciones.size();) {
    suma = suma + fracciones[i];
    i++;
  }

  std::cout << suma << std::endl;

  return 0;
}