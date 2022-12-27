#include<iostream>


int MultiplosCinco(const int limite_calculo) {
  int multiplos_totales{0};
  int contador{1};

  while(contador <= limite_calculo) {
    if(contador % 3 == 0) {
      multiplos_totales = multiplos_totales + contador;
    }
    contador++;
  }

  return multiplos_totales;
}

int MultiplosTres(const int limite_calculo) {
  int multiplos_totales{0};
  int contador{1};

  while(contador <= limite_calculo) {
    if(contador % 5 == 0) {
      multiplos_totales = multiplos_totales + contador;
    }
    contador++;
  }

  return multiplos_totales;
}

int main() {

  const int limite{1000};
  int multiplos_tres{0};
  int multiplos_cinco{0};
  int suma{0};

  multiplos_tres = MultiplosTres(limite);
  multiplos_cinco = MultiplosCinco(limite);

  suma = multiplos_tres + multiplos_cinco;

  std::cout << suma << std::endl;

  return 0;
}