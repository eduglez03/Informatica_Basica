/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Este es un programa que usa la clase racionales para hacer pruebas con
 * ellos
 */
#include <fstream>
#include <iostream>
#include <string>
#include <math.h>

#include "racionales.h"

void ReadFile() {
  std::string line;
  std::ifstream input_file("input_file.txt");
  if (input_file.is_open()) {
    while (std::getline(input_file, line)) {
      int first_numerator, first_denominator, second_numerator, second_denominator;
      first_numerator = (line[0]) - '0';
      first_denominator = (line[2]) - '0';
      second_numerator = (line[4]) - '0';
      second_denominator = (line[6]) - '0';

      Rational first_rational(first_numerator, first_denominator);
      Rational second_rational(second_numerator, second_denominator);

      Rational addition = first_rational + second_rational;
      Rational substract = first_rational + second_rational;
      Rational multiplication = first_rational * second_rational;
      Rational division = first_rational / second_rational;

      std::ofstream miArchivoOut;
      miArchivoOut.open("racionales_out.txt", std::fstream::app);
      if (miArchivoOut.is_open()) {
        miArchivoOut << "ADDITION: " << first_rational.Write() << " + " << second_rational.Write() << " = " << addition.Write() << "\n";
        miArchivoOut << "SUBSTRACT: " << first_rational.Write() << " - " << second_rational.Write() << " = " << substract.Write() << "\n";
        miArchivoOut << "MULTIPLICATION: " << first_rational.Write() << " * " << second_rational.Write() << " = " << multiplication.Write() << "\n";
        miArchivoOut << "DIVISION: " << first_rational.Write() << " / " << second_rational.Write() << " = " << division.Write() << "\n";
        miArchivoOut << "COMPARATION: " << first_rational.Compare(second_rational) << "\n";
        miArchivoOut << "\n";

        miArchivoOut.close();
      } else {
        std::cout << "Unable to open file";
      }
    }
    input_file.close();
  }
}

int main() {
  ReadFile();

  return 0;
}
