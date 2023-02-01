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
 * Counts the amount of consonants in a given word
 *
 * @param word Given word
 * @return amount of consonants in said word
 */
int CountConsonants(std::string& word) {
  int letter_amount = word.length();
  int consonant_counter{0};
  for (int i{0}; i < letter_amount; i++) {
    if ('A' <= word[i] && word[i] <= 'Z') {  /// For upper case
      if (word[i] != 'A' && word[i] != 'E' && word[i] != 'I' &&
          word[i] != 'O' && word[i] != 'U') {
        consonant_counter++;
      }
    } else if ('a' <= word[i] && word[i] <= 'z') {  /// For lower case
      if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' &&
          word[i] != 'o' && word[i] != 'u') {
        consonant_counter++;
      }
    }
  }
  return consonant_counter;
}

/**
 * Counts the amount of vowels in a given word
 *
 * @param word Given word
 * @return amount of vowels in said word
 */
int CountVowels(std::string& word) {
  int letter_amount = word.length();
  int vowel_counter{0};
  for (int i{0}; i < letter_amount; i++) {
    if ('A' <= word[i] && word[i] <= 'Z') {  /// For upper case
      if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
          word[i] == 'O' || word[i] == 'U') {
        vowel_counter++;
      }
    } else if ('a' <= word[i] && word[i] <= 'z') {  /// For lower case
      if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
          word[i] == 'o' || word[i] == 'u') {
        vowel_counter++;
      }
    }
  }
  return vowel_counter;
}