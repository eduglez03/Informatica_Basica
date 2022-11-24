// ENUNCIADO PROBLEMA: https://jutge.org/problems/P90226_en

#include<iostream>

int main() {
  std::string palabra1;
  std::string palabra2;

  std::cout << "Introduzca la primera palabra: " << std::endl;
  std::cin >> palabra1;
  std::cout << "Introduzca la segunda palabra: " << std::endl;
  std::cin >> palabra2;
  
  if (palabra1.size() > palabra2.size()) {
    std::cout << palabra1 << " > " << palabra2 << std::endl;
  } else if (palabra2.size() > palabra1.size()){
    std::cout << palabra1 << " < " << palabra2 << std::endl;
  } else {
    std::cout << palabra1 << " = " << palabra2 << std::endl;
  }
  
  return 0;
}