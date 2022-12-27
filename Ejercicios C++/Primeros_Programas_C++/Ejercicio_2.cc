#include<iostream>

int main() {
  double radio{0};
  double perimetro{0};
  double area{0};
  double numero_pi{3.14};

  std::cout << "Introduzca el radio del círculo" << std::endl;	
  std::cin >> radio;

  perimetro = 2 * numero_pi * radio;
  area = numero_pi * (r * r);
  
  std::cout << "Perímetro = " << perimetro << std::endl;
  std::cout << "Area = " << area << std::endl; 


  return 0;
}