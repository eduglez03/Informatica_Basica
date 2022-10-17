// ENUNCIADO PROBLEMA: https://jutge.org/problems/P34279_en

#include<iostream>
#include<stdio.h>

int main() {
  int horas{0};
  int minutos{0};
  int segundos{0};

  std::cout << "Introduzca las horas, los minutos y los segundos: " << std::endl;
  std::cin >> horas >> minutos >> segundos;

  int nuevos_segundos = {segundos +1};

  if (nuevos_segundos > 59) {
    nuevos_segundos = 00;
    minutos = minutos + 1;
  }

  if (minutos > 59) {
    minutos = 00;
    horas = horas + 1;
  }

  if (horas >= 24) {
    horas = 00;
  }
  

  std::cout << horas << ":" << minutos << ":" << nuevos_segundos << std::endl;
  
  return 0;
}