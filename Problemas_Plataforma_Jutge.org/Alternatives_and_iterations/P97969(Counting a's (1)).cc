// ENUNCIADO PROBLEMA: https://jutge.org/problems/P97969_en

#include<iostream>

int main() {
  std::string frase;

  std::cout << "Introduzca una frase: " << std::endl;
  getline(std::cin, frase);
  
  int contador{0};
  
  for (int i = 0; i <= frase.size();) {
    if (frase[i] == 'a') {
      contador++;
    }
    i++;
  }
  
  std::cout << "La letra a aparece " << contador << " veces" << std::endl;

  return 0;
}

