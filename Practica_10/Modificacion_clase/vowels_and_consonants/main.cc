/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2020
 * @brief Program that prints the word with the most consonats and the one with
 * the most vowels.
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

/// Main functionn
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream input_file{argv[1]};
  int highest_vowel_count{0};
  int highest_consonant_count{0};
  std::string word_with_the_most_vowels;
  std::string word_with_the_most_consonants;
  while (input_file) {  /// While there are still words left to analize
    std::string word;
    input_file >> word;
    int vowel_count = CountVowels(word);
    if (vowel_count > highest_vowel_count) {
      highest_vowel_count = vowel_count;
      word_with_the_most_vowels = word;
    }
    int consonant_count = CountConsonants(word);
    if (consonant_count > highest_consonant_count) {
      highest_consonant_count = consonant_count;
      word_with_the_most_consonants = word;
    }
  }
  std::cout << word_with_the_most_vowels << std::endl;
  std::cout << word_with_the_most_consonants << std::endl;

  return 0;
}