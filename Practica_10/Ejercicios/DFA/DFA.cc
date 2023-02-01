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

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

/// Esta función imprime en pantalla el funcionamiento del programa.

void MensajeInicial() {
  std::cout << "Programa que imprime en pantalla las características de un "
               "fichero input.dfa ."
            << std::endl
            << std::endl;
}

/**
 * Esta función imprime en pantalla las características a partir de que
 * comienzan los deltas.
 * @param linea_examinada
 * @param archivo
 * @return nada
 */

void ImprimeCaracteristicasDFA2(std::string linea_examinada,
                                const std::string& archivo) {
  std::ifstream archivo_examinado{archivo, std::ios_base::in};
  getline(archivo_examinado, linea_examinada);
  getline(archivo_examinado, linea_examinada);
  while (!archivo_examinado.eof()) {
    getline(archivo_examinado, linea_examinada);
    for (int contador = 6; contador < linea_examinada.size(); contador += 4) {
      std::cout << "delta (" << linea_examinada.at(0) << ", ";
      std::cout << linea_examinada.at(contador);
      std::cout << ") = " << linea_examinada.at(contador + 2) << std::endl;
    }
  }
}

/**
 * Esta función imprime en pantalla los valores del número de estados, estados
 * de arranque y transiciones.
 * @param archivo
 * @return nada
 */

void ImprimeCaracteristicasDFA(const std::string& archivo) {
  std::ifstream archivo_examinado{archivo, std::ios_base::in};
  int numero_de_secuencias{0};
  archivo_examinado >> numero_de_secuencias;
  std::cout << "|Q| = " << numero_de_secuencias << std::endl;
  int arranque_dfa{0};
  archivo_examinado >> arranque_dfa;
  std::cout << "q0 = " << arranque_dfa << std::endl;
  std::string linea_examinada;
  int contador_de_estados_aceptados{0};
  int coma_final{0};  /// Para eliminar la coma final de la "F"
  std::cout << "F = {";
  getline(archivo_examinado, linea_examinada);
  while (getline(archivo_examinado, linea_examinada)) {
    if (coma_final != 0) {
      if (linea_examinada.at(2) == '1') {
        std::cout << contador_de_estados_aceptados;
        coma_final = 0;
      }
    } else {
      if (linea_examinada.at(2) == '1') {
        std::cout << contador_de_estados_aceptados << ",";
        coma_final = 1;
      }
    }
    contador_de_estados_aceptados++;
  }
  std::cout << "}" << std::endl;
  ImprimeCaracteristicasDFA2(linea_examinada, archivo);
}

/** Esta función muestra el correcto funcionamiento del programa
 * Sin embargo, muestra el mensaje y finaliza la ejecución del programa
 * @param[in] argc Número de parámetros de la línea de comandos
 * @param[in] argv Vector que contiene los parámetros (char*)
 */

void Usage(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Faltan parámetros." << std::endl;
    std::cout << "Intenta " << argv[0] << " --help para más información"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parametro{argv[1]};
  if (parametro == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}