/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that counts the amount of lines in a program, then copies the
 *        file into another with the lines counted.
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

/** Shows the proper usage of the program
 *  In case the usage is incorrect, shows this message and exits
 *  The program needs a file to work.
 *
 */
void Usage(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": A file is missing" << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * Counts the amount of lines in a program
 *
 * @param input_file File given by user
 */
void CountLines(std::ifstream& input_file) {
  std::ofstream file_with_lines_counted{"test_text_with_lines_counted.txt"};
  int line_counter{0};
  std::string line;
  while (std::getline(input_file,
                      line)) {  /// While there are still words left to analize
    line_counter++;
    file_with_lines_counted << line_counter << " " << line << std::endl;
  }
}
