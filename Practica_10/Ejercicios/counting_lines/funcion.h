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

const std::string kHelpText =
    "This program copies a string of text into a file \
with the contents of a text file that the user must \
introduce via comand line plus the number of the line before each one";

void Usage(int argc, char* argv[]);
void CountLines(std::ifstream& input_file);