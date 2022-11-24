// ENUNCIADO PROBLEMA: https://jutge.org/problems/P37469_en

#include<iostream>

int main() {
  int segundos_introducidos{0};
  const int segundos_minuto{60};
  const int segundos_hora{86400};
  int resto_horas{0};
  int resto_minutos{0};

  int horas{0};
  int minutos{0};
  int segundos{0};


  std::cout << "Introduzca el número de segundos: " << std::endl;
  std::cin >> segundos_introducidos;

  horas = segundos_introducidos / segundos_hora;
  resto_horas = segundos_introducidos % segundos_hora;

  minutos = resto_horas * segundos_minuto;
  minutos = minutos / segundos_minuto;
  resto_minutos = minutos % segundos_minuto;

  segundos = resto_minutos * segundos_minuto;

  std::cout << segundos_introducidos << " segundos son: " << horas << " horas " << minutos << " minutos " << segundos << " segundos " << std::endl;

  return 0;
}