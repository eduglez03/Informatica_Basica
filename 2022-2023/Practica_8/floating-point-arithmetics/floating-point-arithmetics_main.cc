#include<iostream>

#include"floating-point-arithmetics.h"

int main() {
  double number1{0};
  double number2{0};
  const double epsilon{1e-7};

  std::cout << "Introduzca dos valores: " << std::endl;
  std::cin >> number1 >> number2;

  bool resultado = AreEqual(number1, number2, epsilon);

  std::cout << resultado << std::endl;


  return 0;
}