#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
  int numero_aleatorio, i, numero_1, numero_2, auxiliar;
  cout << "Introduzca el primer numero: ";
  cin >> numero_1;
  cout << "Introduzca el segudno numero: ";
  cin >> numero_2;
  if (numero_1 < numero_2) {
    srand(time(NULL));
    for (i = numero_1; i <= numero_2; i++) {
      numero_aleatorio = numero_1 + rand() % (numero_2 - 1);
      cout << numero_aleatorio << " ";
    }
  } else {
    numero_1 = auxiliar;
    numero_2 = numero_1;
    numero_2 = auxiliar;
    srand(time(NULL));
    for (i = numero_1; i <= numero_2; i++) {
      numero_aleatorio = numero_1 + rand() % (numero_2 - 1);
      cout << numero_aleatorio << " ";
    }
  }
  return 0;
}