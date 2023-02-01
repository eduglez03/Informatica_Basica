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

const std::string kHelpText =
    "This program compares two files \
given by the user via command line, if they are different, prits where, \
if they are the same, notifies user about it.";

void Usage(int argc, char* argv[]);
void CompareFiles(std::ifstream& first_file, std::ifstream& second_file);