// ENUNCIADO PROBLEMA: https://jutge.org/problems/P98960_en

#include<iostream>

int main() {
  char letra;
  char nueva_letra;

  std::cout << "Introduzca una letra mayúscula o minúscula: " << std::endl;
  std::cin >> letra;

  if (letra == tolower(letra)) {
    nueva_letra = toupper(letra); 
    std::cout << nueva_letra << std::endl;
  } else {
    nueva_letra = tolower(letra); 
    std::cout << nueva_letra << std::endl;
  }
  
  return 0;
}