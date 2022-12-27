#include<iostream>

#include"Ejercicio_2.h"

void EsPar(const int &numero) {
  for(int i = 0; i <= numero;) {
    if(i % 2 == 0) {
      GenerarPar(i);
    } else {
        GenerarImpar(i);
    }
    i++;
  }
}

void GenerarPar(const int &numerok) {
  int numero_a{0};
  int numero_b{0};
  int numero_c{0};
  bool comprobacion;

  numero_a = (2 * numerok);
  numero_b = ((numerok * numerok) - 1);
  numero_c = ((numerok * numerok) + 1);

  comprobacion = ComprobarTre(numero_a, numero_b, numero_c);

  if(comprobacion == true) {
    std::cout << numero_a << " " << numero_b << " " << numero_c << std::endl;
  }
}

void GenerarImpar(const int &numerok) {
  int numero_a{0};
  int numero_b{0};
  int numero_c{0};
  bool comprobacion{0};

  numero_a = (2 * (numerok * numerok) + 1);
  numero_b = (2 * numerok * (numerok + 1));
  numero_c = numero_b + 1;

  comprobacion = ComprobarTre(numero_a, numero_b, numero_c);

  if(comprobacion == true) {
    std::cout << numero_a << " " << numero_b << " " << numero_c << std::endl;
  }
}

bool ComprobarTre(const bool &numero_a, const bool &numero_b, const bool &numero_c) {
  if((numero_c * numero_c) == ((numero_a * numero_a) + (numero_b * numero_b))) {
    return true;
  } else {
      return false;
  }
}