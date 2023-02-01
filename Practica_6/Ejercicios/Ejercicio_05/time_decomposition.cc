#include <math.h>

#include <iostream>

using namespace std;

int main() {
  int numero, horas, minutos, segundos;
  cout << "Introduzca un numero entero: ";
  cin >> numero;
  horas = numero / 3600;
  minutos = (numero - (horas * 3600)) / 60;
  segundos = (numero - ((horas * 3600) + (minutos * 60)));
  cout << "Las horas son: " << horas << endl;
  cout << "Los minutos son: " << minutos << endl;
  cout << "Los segundos son: " << segundos << endl;
  return 0;
}