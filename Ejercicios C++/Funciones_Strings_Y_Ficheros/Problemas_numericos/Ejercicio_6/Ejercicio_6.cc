#include<iostream>
#include <numeric>
#include<math.h>

#include"Ejercicio_6.h"

int TransformarBinario(const int &binario) {
  std::vector<int>vector_binarios;
  std::vector<int>multiplicaciones;
  std::vector<int>potencias;
  int numero_introducido{binario};
  int vector_size{0};
  int auxiliar{0};
  int resultado{0};

  vector_binarios = GetVector(binario);

  vector_size = vector_binarios.size();

  potencias = Potencias(vector_size);

  for(int i = 0; i <= vector_binarios.size();) {
    for(int j = 0; j <= potencias.size();) {
      auxiliar = vector_binarios[i] * potencias[j];
      multiplicaciones.pushback(auxiliar);
      j++;
    }
    i++;
  }

  resultado = std::accumulate(multiplicaciones.begin(), multiplicaciones.end(), 0);
  
  return resultado;
}

std::vector<int> GetVector(const int &binario) {
  int numero_introducido{binario};
  std::vector<int>vbinario;
  int resto{0};

  while(numero_introducido != 0) {
    resto = numero_introducido % 10;
    vbinario.pushback(resto);
    numero_introducido = numero_introducido / 10;
  }

  vbinario.reverse(vbinario.begin(), vbinario.end());
  
  return vbinario;
}

std::vector<int> Potencias(const int &vector_size) {
  std::vector<int>potencias;
  int auxiliar{0};

  for(int i = 0; i <= vector_size;) {
    auxiliar = pow(2,i);
    potencias.pushback(auxiliar);
    i++;
  }
  return potencias;
}