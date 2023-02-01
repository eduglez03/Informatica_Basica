#include<iostream>

using namespace std;

int main() {
  int numero, i, resto;
  cout << "Este programa calcula los divisores de un numero introducido por el ususario: " << endl;
  cout << "Introduzca un numero: "; cin >> numero;
  cout << "Sus divisores son: " << endl;
  for ( i = 1; i <= numero; i = i + 1) {
    resto = numero % i;
    if (resto == 0) {
      cout << i << " ";
    }
    
  }
  cout << endl;
  return 0;
}