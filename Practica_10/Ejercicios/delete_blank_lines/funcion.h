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
    "This program deletes blank lines from \
a file given by the user via command line";

void Usage(int argc, char *argv[]);
void DeleteBlanks(const char *file_name);