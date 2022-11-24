// ENUNCIADO PROBLEMA: https://jutge.org/problems/P98960_en

#include<iostream>

int main() {
  char letra_introducida;

  std::cout << "Introduzca una letra mayuscula o minuscula: " << std::endl;
  std::cin >> letra_introducida;

  if (letra_introducida == tolower(letra_introducida)) {
    letra_introducida = toupper(letra_introducida);
  } else {
    letra_introducida = tolower(letra_introducida);
  }

  std::cout << letra_introducida << std::endl;
  
  return 0;
}