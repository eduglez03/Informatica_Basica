#include <iostream>
using namespace std;
int main() {
  int numero;
  cout << "Especifica el tamanio del cuadrado: "; cin >> numero;
  for(int linea = 1; linea <= numero; linea++) {
    for(int lado = 1 ; lado <= numero ; lado++) {
      printf("*");
      }
    printf("\n");
    }
  return 0;
}
