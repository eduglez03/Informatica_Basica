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

const std::string kHelpText = "./cripto -- Cifrado de ficheros \
Modo de uso: ./cripto fichero_entrada fichero_salida método password operación \
fichero_entrada: Fichero a codificar \
fichero_salida:  Fichero codificado \
método:          Indica el método de encriptado \
                   1: Cifrado xor \
                   2: Cifrado de César \
password:        Palabra secreta en el caso de método 1, Valor de K en el método 2 \
operación:       Operación a realizar en el fichero \
                   +: encriptar el fichero \
                   -: desencriptar el fichero"; 

void Usage(int argc, char *argv[]);
std::string CreatePassword(const std::string& password);
void Xor(std::string& line, std::ofstream& result_file, std::string& password);
void Caesar(std::string& line, std::ofstream& result_file, std::string& password, const std::string& operation);