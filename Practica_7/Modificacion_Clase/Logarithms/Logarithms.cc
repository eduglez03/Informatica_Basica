#include <bits/stdc++.h>

using namespace std;

int main() {
  int numero, base;
  int i = 0;
  double valor = 0;
  // cout << "Introduzca la base : " << endl;
  // cin >> base;
  // cout << "Introduzca el numero : " << endl;
  while(cin >> numero and cin >> base) {
    while(valor < numero) {
    valor = pow(base,i);
    if (valor == numero) {
      break;
    } 
    i+= 1;
   }
   cout << i << endl;
  }
  // cin >> numero;
   return 0;
}
