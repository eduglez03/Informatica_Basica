***Universidad de La Laguna* Escuela Superior de Ingeniería y Tecnología* Grado
        en Ingeniería Informática* Informática Básica** @author Eduardo González
            Gutiérrez* @date 15 /
    12 / 2021 * @brief Program that copies a file into another one.** /

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

    const std::string kHelpText =
    "This program copies a file into another one. \
You must introduce a two file into command line";

void Usage(int argc, char* argv[]);
void CopyFile(std::ifstream& input_file, std::ofstream& output_file);