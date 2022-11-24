#include<iostream>
#include<math.h>

bool IsAValidTriangle(double lado_a, double lado_b, double lado_c) {
  double suma_lados = lado_a + lado_b + lado_c;
  
  if (lado_a > suma_lados - lado_a) {
    return 0;
  }
  
  else if (lado_b > suma_lados - lado_b) {
    return 0;
  }

  else if (lado_c > suma_lados - lado_c) {
    return 0;
  }
  
  return 1;
}


double Area(double lado_a, double lado_b, double lado_c, bool boleano) {
  double area{0};
  double semi_perimetro{0};

  if (boleano == 0) {
    std::cout << "Este triangulo no es válido" << std::endl;
  } else {
    semi_perimetro = ((lado_a + lado_b + lado_c) / 2);
    area = sqrt(semi_perimetro * (semi_perimetro - lado_a) * (semi_perimetro - lado_b) * (semi_perimetro - lado_c));
    std::cout << area << std::endl;
  }

  return 0;
}