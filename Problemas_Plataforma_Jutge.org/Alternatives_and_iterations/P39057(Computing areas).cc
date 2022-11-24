// ENUNCIADO PROBLEMA: https://jutge.org/problems/P39057_en

#include<iostream>
#include <math.h>

int main() {
  int parametro{0};
  std::string opcion;

  std::cout << "Introduzca un parámetro: " << std::endl;
  std::cin >> parametro;

  for (int i = 0; i < parametro;) {
    
    std::cout << "¿circulo o rectángulo?: " << std::endl;
    std::cin >> opcion;
    
    if (opcion == "circulo") {
      double radio{0};
      double area{0};

      std::cin >> radio;
    
      area = M_PI * (radio * radio);

      std::cout << area << std::endl;

    } else if (opcion == "rectangulo") {
        double area{0};
        double lado{0};

        std::cin >> lado;
    
        area = lado * lado;

        std::cout << area << std::endl;

      } else {
          std::cout << "Introduzca una opción válida" << std::endl;
        }
    
    i++;
  }

  return 0;
}