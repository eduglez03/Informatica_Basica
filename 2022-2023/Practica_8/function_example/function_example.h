#include<iostream>
#include<math.h>

double CalculoFuncion(double numero_x, double numero_y, double numero_t) {
  double resultado{0};
  
  resultado = (sqrt((2 * numero_t) - 4) / ((numero_x * numero_x) - (numero_y * numero_y)));

  std::cout << resultado << std::endl;

  return 0;
}