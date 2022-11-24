// ENUNCIADO PROBLEMA: https://jutge.org/problems/P70955_en

#include<iostream>

int main() {

  int years;
  int dias;
  int horas;
  int minutos;
  int segundos;
  long int segundos_totales;

  const long int segundos_year{31536000};
  const int segundos_dias{86400};
  const int segundos_minutos{60};

  std::cout << "Introduzca el número de años, días, horas, minutos y segundos: " << std::endl;
  std::cin >> years >> dias >> horas >> minutos >> segundos;

  segundos_totales = ((years * segundos_year) + (dias * segundos_dias) + (minutos * segundos_minutos) + segundos);
  
  std::cout << "El número total de segundos es: " << segundos_totales << std::endl;

  return 0;
}