// ENUNCIADO EJERCICIO: https://jutge.org/problems/P48107_en

#include<iostream>

int main() {

  int numero_a{0};
  int numero_b{0};
  int division{0};
  int resto{0};

  std::cout << "Introduzca un dividendo y un divisor para realizar las operaciones, siendo el divisor mayor de 0: " << std::endl;
  std::cin >> numero_a >> numero_b;

  if (numero_b > 0) {
    division = numero_a / numero_b;
    resto = numero_a % numero_b;
  } else {
      std::cout << "Introduzca un divisor mayor que 0" << std::endl;
  }

  std::cout << division << " " << resto << std::endl;
  
  return 0;
}