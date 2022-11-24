#include<iostream>

#include"triangle-area.h"

int main() {
  double longitud_a{0};
  double longitud_b{0};
  double longitud_c{0};

  std::cout << "Introduzca las longitudes de los lados del triangulo: " << std::endl;
  std::cin >> longitud_a >> longitud_b >> longitud_c;

  bool validez = IsAValidTriangle(longitud_a, longitud_b, longitud_c);
  Area(longitud_a, longitud_b, longitud_c, validez);


  return 0;
}