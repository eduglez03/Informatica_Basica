#include <iostream>
#include <math.h>

int CalculateDivisors(int number_introduced) {
  std::cout << "divisors of " << number_introduced << ":";
  for (int contador = 1; contador < sqrt(number_introduced); ++contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << contador;
    }
  }
  for (int contador = sqrt(number_introduced); contador >= 1; --contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << (number_introduced / contador);
    }
  }
  return 0;

int main() {
  int number_introduced{0};
  int suma{0};
  suma += CalculateDivisors;
  std::cout << suma << std::endl;
  return 0;
}

