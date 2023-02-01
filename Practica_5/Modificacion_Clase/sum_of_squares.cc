#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int numero_introducido, i;
  cout << "Introduce un numero: "; cin >> numero_introducido;
  for (i = 0; i <= numero_introducido; ++i) {
    cout << pow(i,2)<<", ";
  }
  return 0;
}