/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2020
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

  std::ifstream first_file{argv[1]};
  std::ifstream second_file{argv[2]};
  CompareFiles(first_file, second_file);
  std::cerr << "Program done.\n";
  return 0;
}