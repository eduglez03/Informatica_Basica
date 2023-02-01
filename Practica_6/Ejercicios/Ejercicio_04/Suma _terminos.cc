#include<iostream>
using namespace std;
int main() {
  int numero, suma = 0;
  cout << "Este programa calcula la suma de los terminos de un numero introducido por el usuario" << endl;
  cout << "Introduzca un numero entero: "; cin >> numero;
  while (numero > 0) {
    suma = suma + numero%10;
    numero = numero / 10;
  }
  cout << "La Suma de los terminos es: " << suma << endl;
  return 0;
}