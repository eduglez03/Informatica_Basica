// ENUNCIADO PROBLEMA: https://jutge.org/problems/P59875_en

#include<iostream>
#include<vector>
#include <algorithm>

int main() {
  std::vector<int>numeros;
  int numero1{0};
  int numero2{0};
  
  std::cout << "Introduzca dos números: " << std::endl;
  std::cin >> numero1 >> numero2;

  if (numero1 > numero2) {
    for (int i = numero2; i <= numero1;) {
      numeros.push_back(i);
      i++;
    }
  } else if (numero2 > numero1){
      for (int i = numero1; i <= numero2;) {
        numeros.push_back(i);
        i++;
      }
  } else {
    std::cout << numero1 << std::endl;
  }

  std::reverse(numeros.begin(), numeros.end());

  for (int i = 0; i < numeros.size();) {
    std::cout << numeros[i] << std::endl;
    i++;
  }
  
  return 0;
}