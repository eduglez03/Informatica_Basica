/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2020
 * @brief Program that prits the word with the most consonats and the one with
 * the most vowels.
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

  std::ifstream input_file{argv[1]};
  CountLines(input_file);
  std::cerr << "Program done.\n";
  return 0;
}