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

/**
 * Shows the proper usage of the program
 * In case the usage is incorrect, shows this message and exits
 * The program needs two files to work.
 *
 */
void Usage(int argc, char* argv[]) {
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
 * Rotares vowels of a file
 *
 * @param original_file Inputed file
 */
void RotateVowels(std::ifstream& original_file) {
  std::ofstream result_file("result.txt");
  std::string line;
  while (std::getline(original_file, line)) {
    int letter_amount = line.length();
    for (int i{0}; i < letter_amount; i++) {
      if (line[i] == 'a') {  /// If the letter is a vowel, switch it.
        line[i] = 'e';
      } else if (line[i] == 'e') {
        line[i] = 'i';
      } else if (line[i] == 'i') {
        line[i] = 'o';
      } else if (line[i] == 'o') {
        line[i] = 'u';
      } else if (line[i] == 'u') {
        line[i] = 'a';
      }
    }
    result_file << line << std::endl;
  }
}