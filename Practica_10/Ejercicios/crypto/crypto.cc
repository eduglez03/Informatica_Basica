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

/** 
 * Shows the proper usage of the program
 * In case the usage is incorrect, shows this message and exits
 * The program needs two files to work.
 *
 */
void Usage(int argc, char *argv[]) {
  std::string parameter{argv[1]};
  if (argc != 6) {
    std::cout << argv[0] << ": File(s) are missing" << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  } else if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * The passwords needs to be encrypted first in order to work
 * 
 * @param password xor parameter
 * @return encrypted_password New password, needed to properly encrypt
 */
std::string CreatePassword(const std::string& password) {
  const std::string kXorConstant{"128"};
  const int kDigitLImit = kXorConstant.length(); 
  const int kPasswordLength = password.size();
  std::string encrypted_password{""}; 
  int xor_counter{0};  /// Keeps track of the xor digits to loop back to the first one  
  for (int i{0}; i < kPasswordLength; ++i) {
    encrypted_password += password[i] ^ kXorConstant[xor_counter];
    xor_counter++;
    if (xor_counter == kDigitLImit) {
      xor_counter = 0;
    }
  }
  return encrypted_password;   /// This will be the password used
}

/**
 * Encryps with xor
 * @param line line to change
 * @param password xor parameter
 */
void Xor(std::string& line, std::ofstream& result_file, std::string& password) {
  const int kLineLength = line.size();
  const int kPasswordLength = password.size();
  std::string output = line;
  for (int i{0}; i < kLineLength; ++i) {
    output[i] = line[i] ^ password[i % kPasswordLength];
    result_file << output[i];
  }
  result_file << std::endl;
}

/**
 * Encryps with caesar cypher
 * @param line Line to change
 * @param password k parameter
 */
void Caesar(std::string& line, std::ofstream& result_file, const std::string& password, const std::string& operation) {
  int parametro_k = std::stoi(password);
  const int kLineLength = line.length();
  const std::string kDesencrypt = "-";
  if (operation == kDesencrypt) {
    parametro_k *= -1;  
  }
  for(int i{0}; i < kLineLength; i++) {
    line[i] += parametro_k;
    result_file << line[i]; 
  }  
  result_file << std::endl;
}