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

const std::string kHelpText =
    "This program prints the word with the most \
consonants and the one with the most vowels of a text file that the user must \
introduce via comand line.";

void Usage(int argc, char* argv[]);
int CountVowels(std::string& word);
int CountConsonants(std::string& word);