#include<iostream>
using namespace std;

int main() {
  cout << "Este programa muestra en pnatalla todos los numeros primos en un rango [A,B] introducido por el usuario" << endl;
  int numero_1, numero_2,i = 0,i2 = 0,resto = 0,numero_3 = 0;
  cout << "Introduzca el primer numero: "; cin >> numero_1;
  cout<<"Introduce el segundo numero: "; cin>>numero_2;
  for(i = numero_1; i <= numero_2; i++) {
    for(i2 = 1; i2 <= i; i2++) {
      resto = i%i2;
      if(resto==0) {
        numero_3 = numero_3 + 1;
      }
    }
    if(numero_3==2) {
      cout << " " << i;
    }
    numero_3 = 0;
  }
  return 0;
}