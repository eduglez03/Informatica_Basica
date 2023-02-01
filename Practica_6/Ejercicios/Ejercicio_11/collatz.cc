#include<iostream>
using namespace std;
void conjetura (int numero) {
  cout << numero <<" ";
  if (numero > 1) {
    if (numero % 2 == 0){
      conjetura(numero / 2);
    }
    else {
      conjetura(numero + numero + numero + 1);
    }
  }
}
int main() {
  int numero = 0;
  cout << "Introduzca un numero: " <<endl;
  cin >> numero;
  conjetura(numero);
  return 0;
}