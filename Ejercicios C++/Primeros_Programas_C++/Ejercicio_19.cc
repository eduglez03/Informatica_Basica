#include<iostream>
#include<fstream>
#include<vector.h>

void ImpirmirInvertido(std::vector<int>&datosInvertir) {
  std::vector<int>invertido;

  invertido = datosInvertir.reverse(datosInvertir.begin(), datosInvertir.end());

  for(int i = 0; i <=invertido.size();) {
    std::cout << invertido[i];
    i++;
  }
  std::cout << std::endl;
}

int main() {
  int valores{0};
  std::vector<int>datos;
  ifstrem fichero("entrada.txt");

  if(!fichero.open()) {
    std::cout << "Error al abrir el fichero" << std::endl;
    exit(EXIT_FAILURE);
  }

  while(fichero >> valores) {
    datos.pushback(valores);
  }

  ImprimirInvertido(datos);

  return 0;
}