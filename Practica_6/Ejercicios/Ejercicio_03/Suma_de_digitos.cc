#include<iostream>
using namespace std;
int main() {
  cout << "Este programa suma los tres ultimos terminos de un numero  natural introducido por el usuario" << endl;
  int numero, suma;
  cout << "Introduzca un numero natural: "; cin >> numero;
  while (numero > 0)
  {
    suma = suma + numero % 10;
    numero = numero / 10;
  }
  cout << "la suma es: " <<suma;
  













  return 0;
}