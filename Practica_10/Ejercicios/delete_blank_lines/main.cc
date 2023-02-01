/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that copies a file into another one.
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

/// Main function
int main(int argc, char* argv[]) {
  Usage(argc, argv);

  // std::ifstream file_name{argv[1]};
  DeleteBlanks(argv[1]);
  std::cerr << "Program done.\n";
  return 0;
}