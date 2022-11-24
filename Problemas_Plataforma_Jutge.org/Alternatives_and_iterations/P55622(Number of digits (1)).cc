// ENUNCIADO PROBLEMA: https://jutge.org/problems/P55622_en

#include<iostream>
#include<vector>

int main() {
  int numero{0};
  int auxiliar{0};
  int total_digitos{0};
  std::vector<int>digitos;

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> numero;

  if (numero == 0) {
    total_digitos = 1;
  } else {
      while (numero > 0) {
        auxiliar = numero % 10;
        numero = numero / 10;
        digitos.push_back(auxiliar);
      }
      
      total_digitos = digitos.size();
    }
  
 

  std::cout << "El número de dígitos es: " << total_digitos << std::endl;

  return 0;
}