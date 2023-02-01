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
void Usage(int argc, char *argv[]) {
  std::string parameter{argv[1]};
  if (argc != 2) {
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
 * Deletes blank lines from a file
 *
 * @param file_name File given by user to delete blanks
 */
void DeleteBlanks(const char *file_name) {
  std::ifstream file_with_blanks(file_name);

  std::ofstream file_without_blanks;
  file_without_blanks.open("temp.txt", std::ios::out);  /// Creates a new file

  std::string line;
  while (std::getline(file_with_blanks, line)) {
    while (line.length() == 0) {  /// Skips blank lines
      std::getline(file_with_blanks, line);
    }
    file_without_blanks
        << line << std::endl;  /// Writes non empty lines into the new file
  }
  file_without_blanks.close();
  file_with_blanks.close();
  remove(file_name);  /// Deletes the older file
  rename("temp.txt",
         file_name);  // Rename the new one so it feels like its the same file
}