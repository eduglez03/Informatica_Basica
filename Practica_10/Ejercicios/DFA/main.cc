/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Programa que imprime en pantalla las características de un fichero
 * input.dfa .
 * @bug No hay bugs conocidos
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  std::string archivo = argv[1];
  MensajeInicial();
  ImprimeCaracteristicasDFA(archivo);
  return 0;
}