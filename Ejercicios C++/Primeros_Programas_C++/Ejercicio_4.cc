#include<iostream>
#include<math.h>

int main() {
  double cateto1{0};
  double cateto2{0};
  double hipotenusa{0};

  std::cout << "Introduzca la medida del primer y segundo cateto" << std::endl;
  std::cin >> cateto1 >> cateto2;

  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

  std::cout << "El valor de la hipotenusa es " << hipotenusa << std::endl;

  return 0;
}