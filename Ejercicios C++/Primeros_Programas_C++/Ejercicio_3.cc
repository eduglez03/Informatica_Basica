#include<iostream>

int main() {
  double longitud{0};
  const double valor_centimetros{2.54};
  double conversión{0};

  std::cout << "Introduzca la longitud" << std::endl;
  std::cin >> longitud;

  conversion = longitud * valor_centimetros;

  std::cout << longitud << "cm = " << conversion << " in" << std::endl;

  return 0;
}