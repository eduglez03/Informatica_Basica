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

/** Shows the proper usage of the program
 *  In case the usage is incorrect, shows this message and exits
 *  The program needs two files to work.
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
 * Counts the amount of lines in a program
 *
 * @param input_file File given by user to copy
 * @param output_file File given by user to copy to
 */
void CopyFile(std::ifstream& input_file, std::ofstream& output_file) {
  std::string line;
  while (std::getline(input_file,
                      line)) {  /// While there are still words left to analize
    output_file << line << std::endl;
  }
}