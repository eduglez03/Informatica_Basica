// Desarrolle un programa desinflado.cc que lea una letra mayúscula y muestre por pantalla su correspondiente letra minúscula.

#include<iostream>

int main() {
  char letra;

  std::cout << "Introduzca una letra mayúscula o minúscula: " << std::endl;
  std::cin >> letra;

  if (letra == tolower(letra)) {
    std::cout << toupper(letra);
  } else {
    std::cout << tolower(letra);
  }

  return 0;
}