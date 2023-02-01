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

/**
 * Shows the proper usage of the program
 * In case the usage is incorrect, shows this message and exits
 * The program needs two files to work.
 *
 */
void Usage(int argc, char* argv[]) {
  std::string parameter{argv[1]};
  if (argc != 3) {
    std::cout << argv[0] << ": File(s) are missing" << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information"
              << std::endl;
    exit(EXIT_SUCCESS);
  } else if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * Compares two files and prits their differences
 *
 * @param first_file File given in arg[1]
 * @param second_file File given in arv[2]
 */
void CompareFiles(std::ifstream& first_file, std::ifstream& second_file) {
  std::string line_file_1, line_file_2;
  int line_counter{1}, difference_counter{0};
  while (first_file.good() && second_file.good()) {
    std::getline(first_file, line_file_1);
    std::getline(second_file, line_file_2);
    if (line_file_1 != line_file_2) {
      std::cout << "Line " << line_counter << ": first file: " << line_file_1
                << " second_file: " << line_file_2 << "\n";
      difference_counter++;
      break;
    }
    ++line_counter;
  }
  if (difference_counter == 0) {
    std::cout << "The files are the same.\n";
  }
}
