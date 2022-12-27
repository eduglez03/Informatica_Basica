#include>iostream>
#include<vector.h>

std::vector<int>EsPar(const std::vector<int>serie) {
  std::vector<int>pares;

  for(int i = 0; i <= serie.size();) {
    if(serie[i] % 2 == 0) {
      pares.pushbak(serie[i]);
    }
    i++;
  }

  return pares;
}

void ImprimirSolucion(const std::vector<int>solucion) {
  for(int i = 0; i <= solucion.size();) {
    std::cout << solucion[i];
  }
  std::cout << std::endl;
}

int main() {
  const int limite{1000};
  int acumulador{0};
  int contador{0};
  int primero{0};
  int segundo{1};
  std::vector<int>valores;
  std::vector<int>solucion;

  valores.pushback(primero);
  valores.pushback(segundo);

  acumulador = primero + segundo;

  valores.pushback(acumulador);

  while(contador <= limite) {
    primero = segundo;
    segundo = acumulador;

    acumulador = primero + segundo;
    
    valores.pushback(acumulador);

    contador++;
  }

  solucion = EsPar(valores);
  ImpirmirSolucion(solucion);

  return 0;
}