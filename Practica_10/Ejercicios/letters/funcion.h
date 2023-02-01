/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that archives the words in a file by first letter;
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

const std::string kHelpText =
    "This program archives the words in a file \
given by the user via command line, by first letter.";

void Usage(int argc, char* argv[]);
void ArchiveIntoFiles(std::ifstream& original_file);