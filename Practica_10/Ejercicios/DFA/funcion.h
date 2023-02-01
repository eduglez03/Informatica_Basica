/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Programa que imprime en pantalla las características de un fichero
 * input.dfa .
 * @bug No hay bugs conocidos
 */

#include <iostream>
#include <string>

void MensajeInicial();
void ImprimeCaracteristicasDFA(const std::string& archivo);
void ImprimeCaracteristicasDFA2(std::string linea_examinada,
                                const std::string& archivo);
void Usage(int argc, char* argv[]);

const std::string kHelpText =
    "Este programa imprime las caracterÃ­sticas de un archivo (input.dfa). El "
    "nombre del fichero debe ponerse en la linea de comandos.";