// Escriba un programa arithmetic_operators.cc que declare e inicialice variables de tipos aritméticos e imprima en pantalla el resultado de operar 
// esas variables con todos los operadores que pueda utilizar con ellas. Utilice operadores aritméticos y de comparación.

#include<iostream>

int main() {
  int numero1{0};
  int numero2{0};

  int resta{0};
  int suma{0};
  int multiplicacion{0};
  int division{0};
  int resto{0};

  std::cout << "Introduzca dos valores: " << std::endl;
  std::cin >> numero1 >> numero2;


  resta = numero1 - numero2;
  suma = numero1 + numero2;
  multiplicacion = numero1 * numero2;
  division = numero1 / numero2;
  resto = numero1 % numero2;

  if (numero1 > numero2) {
    std::cout << numero1 << " > " << numero2 << std::endl;
  } else if (numero2 > numero1) {
      std::cout << numero2 << " > " << numero1 << std::endl;
  } else {
      std::cout << numero1 << " = " << numero2 << std::endl;
  }

  std::cout << numero1 << " + " << numero2 << " = " << suma << std::endl;
  std::cout << numero1 << " - " << numero2 << " = " << resta << std::endl;
  std::cout << numero1 << " * " << numero2 << " = " << multiplicacion << std::endl;
  std::cout << numero1 << " / " << numero2 << " = " << division << std::endl;
  std::cout << numero1 << " % " << numero2 << " = " << resto << std::endl;

  return 0;
}