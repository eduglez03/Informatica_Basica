#include<iostream>

#include"function_example.h"

int main() {
  double variable_t{0};
  double variable_x{0};
  double variable_y{0};

  std::cout << "Introduzca el valor de las variables x, y, t: " << std::endl;
  std::cin >> variable_x >> variable_y >> variable_t;

  CalculoFuncion(variable_x, variable_y, variable_t);

  return 0;
}