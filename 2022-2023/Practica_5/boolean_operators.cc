// Escriba un programa boolean_operators.cc que imprima en pantalla la tabla de verdad de los operadores lógicos (and, or, not) de C++. 
// El programa deberá utilizar un par de variables booleanas y mostrar el resultado de operar ambas variables con todos sus posibles valores 
// y con cada uno de los operadores lógicos.


#include<iostream>

int main() {
  bool uno{1};
  bool cero{0};

  std::cout << "A" << " B" << std::endl;
  std::cout << cero << " " << cero << std::endl;
  std::cout << cero << " " << uno << std::endl;
  std::cout << uno << " " << cero << std::endl;
  std::cout << uno << " " << uno << std::endl;
  
  



  return 0;
}