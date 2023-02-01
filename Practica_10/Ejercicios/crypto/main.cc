/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that encrypts or desencrupt messages 
 *        with xor cypher or caesar cipher
 *
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "funcion.h"



/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv); 
  std::ifstream original_file{argv[1]};
  std::ofstream result_file{argv[2]};
  const int kMethod = std::stoi(argv[3]);
  std::string password{argv[4]};
  std::string operation{argv[5]};
  std::string line;

  if (!original_file) {
    std::cerr << "Uh oh, file could not be opened for writing!" << std::endl;
    return 1;
  }
    while(std::getline(original_file, line)) {
      if (kMethod == 1) {
        std::string encrypted_password = CreatePassword(password);
        Xor(line, result_file, encrypted_password);  
      } else if (kMethod == 2) {
        Caesar(line, result_file, password, operation);
      }   
    }
  std::cerr << "Program done.\n";
  return 0;
}