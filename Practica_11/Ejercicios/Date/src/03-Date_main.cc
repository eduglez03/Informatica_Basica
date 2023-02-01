/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief clase Vector
 */

#include <iostream>

#include "03-Date.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string date_introduced = argv[1];  /// Whole process to separate the date :)
  if (date_introduced.length() != 10) {
    EXIT_SUCCESS;
  }
  std::string day_introduced_string = {""};
  for (int counter = 0; counter < 9; ++counter) {
    if (date_introduced.at(counter) == '/') {
      break;
    }
    day_introduced_string = day_introduced_string + date_introduced.at(counter);
  }
  int day_introduced = std::stoi(day_introduced_string);
  std::string month_introduced_string;
  for (int counter = 3; counter < 9; ++counter) {
    if (date_introduced.at(counter) == '/') {
      break;
    }
    month_introduced_string = month_introduced_string + date_introduced.at(counter);
  }
  int month_introduced = std::stoi(month_introduced_string);
  std::string year_introduced_string;
  for (int counter = 6; counter <= 9; ++counter) {
    if (date_introduced.at(counter) == '/') {
      break;
    }
    year_introduced_string = year_introduced_string + date_introduced.at(counter);
  }
  int year_introduced = std::stoi(year_introduced_string);
  Date date_introduced_object{day_introduced, month_introduced, year_introduced};
  int number_of_itineration = std::stoi(argv[2]);
  date_introduced_object.DatesFile(number_of_itineration, argv[3]);
  /// Comparation operator
  Date date_invented{7, 12, 2003};
  std::cout << (date_introduced_object < date_invented) << std::endl;
  std::cout << date_invented.IsLeapYear(year_introduced) << std::endl;
  return 0;
}