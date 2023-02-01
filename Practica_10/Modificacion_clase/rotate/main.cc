/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program rotates the vowels of a file given
 *        by the user via command line.
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

  std::ifstream original_file{argv[1]};
  RotateVowels(original_file);
  std::cerr << "Program done.\n";
  return 0;
}