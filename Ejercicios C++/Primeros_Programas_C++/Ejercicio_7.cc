#include<iostream>

void Comparacion(const double lado_1, const double lado_2, const double lado_3) {
  if(lado1 > lado2 + lado3) {
    std::cout << "No es un triangulo válido" << std::endl; 

  elif(lado2 > lado1 + lado3) {
    std::cout << "No es un triangulo válido" << std::endl;
 
  elif(lado3 > lado1 + lado2) {
    std::cout << "No es un triangulo válido" << std::endl;
  } else {
    TipoTriangulo(lado_1, lado_2, lado_3);
  }
}

void TipoTriangulo(const double lado_1, const double lado_2, const double lado_3) {
  if(lado_1 == lado_2 && lado_1 == lado_3) {
    std::cout << "El triángulo es equilátero" << std::endl;
  elif(lado_1 != lado_2 && lado_1 != lado_3) {
    std::cout << "El triángulo es escaleno" << std::endl;
  } else {
    std::cout << "El triángulo es isoceles" << std::endl;
  }
}

int main() {
  double lado1{0};
  double lado2{0};
  double lado3{0};
  
  std::cout << "Introduzca la longitud de los lados del triangulo: " << std::endl;
  std::cin >> lado1 >> lado2 >> lado3;

  Comparacion(lado1, lado2, lado3);

  return 0;
}