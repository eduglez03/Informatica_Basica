/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that rotates the vowels of a file given
 *        by the user via command line.
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

const std::string kHelpText =
    "This program rotates the vowels of a file given \
by the user via command line.";

void Usage(int argc, char* argv[]);
void RotateVowels(std::ifstream& original_file);