#include<iostream>

using namespace std;

void entero(int&);
void caracter(char&);
void booleano(bool&);
void flotante(float&);

int main() {
  int numero;
  numero = 1;
  char letra;
  letra = 'a';
  bool p;
  p = true;
  float numero1;
  numero1 = 1.2345;

  entero(numero);
  caracter(letra);
  booleano(p);
  flotante(numero1);
  
  return 0;
}

void entero(int& xnumero) {
  cout<<"La variable entera es: "<<xnumero<<endl;
}

void caracter(char& xletra) {
  cout<<"El caracter es: "<<xletra<<endl;
}

void booleano(bool& xbooleano) {
  cout<<"El caracter booleano es: "<<xbooleano<<endl;
}

void flotante(float& xflotante) {
  cout<<"El caracter de tipo flotante es: "<<xflotante<<endl;
}