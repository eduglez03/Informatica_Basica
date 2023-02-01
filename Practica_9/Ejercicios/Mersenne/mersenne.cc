/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file mersenne.cc
  * @author Eduardo González Gutiérrez alu0101461588@ull.edu.es
  * @date Dic 10 2021
  * @brief Desarrolle un programa mersenne.cc que tome por línea de comandos un número N y muestre como salida los primeros N primos de Mersenne.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include <cmath>
#include<funciones.h>

void MensajeInicial() {
  std::cout << "Programa que indica los primeros numeros primos de Mersenne dado un numero introducido." << std::endl << std::endl;
}

void NumerosMersenne(int numero_introducido) {
  int cantidad_de_numeros{0};
  int resultado{0};
  int numero_a_dividir{2};
  bool es_primo = true;
  while (cantidad_de_numeros < numero_introducido) {
    resultado = 0;
    resultado = (pow(2, numero_a_dividir) - 1);
    numero_a_dividir = numero_a_dividir + 1;
      for (int contador2 = 2; contador2 < resultado; ++contador2) {
        if (resultado % contador2 == 0) {
          es_primo = false;
          break;
        } else {
          es_primo = true;
        }
      }
      if (es_primo == true) {
        std::cout << resultado << std::endl;
        cantidad_de_numeros = cantidad_de_numeros + 1;
      }
    }
}

int main() {
  //MensajeInicial();
  int numero_introducido{0};
  std::cin >> numero_introducido;
  NumerosMersenne(numero_introducido);
  return 0;
}