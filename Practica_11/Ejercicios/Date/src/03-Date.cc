/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Date class Implementation
 */

#include "03-Date.h"

#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

/*
 * @brief Constructor that check if the date are valid.
 *
 */
Date::Date(int day_introduced, int month_introduced, int year_introduced)
    : day_introduced_{day_introduced},
      month_introduced_{month_introduced},
      year_introduced_{year_introduced} {
  if (year_introduced > 9999 || year_introduced < 1800) {
    std::cout << "INVALID DATE" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (month_introduced > 12 || month_introduced < 1) {
    std::cout << "INVALID DATE" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (day_introduced > 31 || day_introduced < 1) {
    std::cout << "INVALID DATE" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if ((month_introduced >= 1 && month_introduced <= 7)) {
    if (month_introduced % 2 == 0 && day_introduced > 30) {
      std::cout << "INVALID DATE" << std::endl;
      exit(EXIT_SUCCESS);
    }
  } else {
    if (month_introduced % 2 != 0 && day_introduced > 30) {
      std::cout << "INVALID DATE" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (month_introduced == 2 && IsLeapYear(year_introduced) == false &&
      day_introduced > 28) {
    std::cout << "INVALID DATE" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (month_introduced == 2 && IsLeapYear(year_introduced) == true &&
      day_introduced > 29) {
    std::cout << "INVALID DATE" << std::endl;
    exit(EXIT_SUCCESS);
  }
}
/*
 * @brief This method determinate if a year is leap or not.
 * @return true / false
 */
bool Date::IsLeapYear(int year_introduced) const {
  if ((year_introduced % 4 == 0) && (year_introduced % 100 != 0)) {
    return true;
  }
  if ((year_introduced % 100 == 0) && (((year_introduced / 100) % 4) == 0)) {
    return true;
  }
  return false;
}
/*
 * @brief This method determinate if a year is leap or not.
 * @return true / false
 */
void Date::DatesFile(const int number_itineration_introduced, const std::string& file_name) {
  std::ofstream file_with_dates{file_name, std::ios_base::app};
  for (int counter = 1; counter <= number_itineration_introduced; ++counter) {
    DaySetter(DayGetter() + 1);
    if (DayGetter() > 31) {
      DaySetter(1);
      MonthSetter(MonthGetter() + 1);
    }
    if (MonthGetter() > 12) {
      MonthSetter(1);
      YearSetter(YearGetter() + 1);
    }
    if ((MonthGetter() >= 1 && MonthGetter() <= 7)) {
      if (MonthGetter() % 2 == 0 && DayGetter() > 30) {
        DaySetter(1);
        MonthSetter(MonthGetter() + 1);
      }
    } else {
      if (MonthGetter() % 2 != 0 && DayGetter() > 30) {
        DaySetter(1);
        MonthSetter(MonthGetter() + 1);
      }
    }
    if (MonthGetter() == 2 && IsLeapYear(YearGetter()) == false &&
        DayGetter() > 28) {
      DaySetter(1);
      MonthSetter(MonthGetter() + 1);
    }
    if (MonthGetter() == 2 && IsLeapYear(YearGetter()) == true &&
        DayGetter() > 29) {
      DaySetter(1);
      MonthSetter(MonthGetter() + 1);
    }
    std::string output_file = std::to_string(DayGetter()) + "/" + std::to_string(MonthGetter()) + "/" + std::to_string(YearGetter());
    file_with_dates << output_file << std::endl;
    output_file = "";
  }
}
/*
 * @brief This method calculate the factorial of the introduced number.
 * @return result : the factorial of the number
 */
std::istream& operator>>(std::istream& in, Date& date) {
  in >> date.day_introduced_;
  in >> date.month_introduced_;
  in >> date.year_introduced_;
  return in;
}
/*
 * @brief This method overcharge the insertion operator
 * @return result : the factorial of the number
 */
std::ostream& operator<<(std::ostream& out, const Date& DateIntroduced) {
  out << DateIntroduced.DayGetter() << "/" << DateIntroduced.MonthGetter()
      << "/" << DateIntroduced.YearGetter() << std::endl;
  return out;
}
/*
 * @brief This method allow user to comparate two dates.
 * @return true / false
 */
bool operator<(const Date& date1, const Date& date2) {
  if (date1.YearGetter() < date2.YearGetter()) {
    return true;
  }
  if ((date1.YearGetter() == date2.YearGetter()) &&
      (date1.MonthGetter() < date2.MonthGetter())) {
    return true;
  }
  if ((date1.YearGetter() == date2.YearGetter()) &&
      (date1.MonthGetter() == date2.MonthGetter()) &&
      (date1.DayGetter() < date2.DayGetter())) {
    return true;
  }
  return false;
}

/*
 * @brief This method allow user to determinate if two dates are equals.
 * @return true / false
 */
bool operator==(Date& date1, const Date& date2) {
  if (date1.DayGetter() == date2.DayGetter() &&
      date1.MonthGetter() == date2.MonthGetter() &&
      date1.YearGetter() == date2.YearGetter()) {
    return true;
  }
  return false;
}

/** This function shows the correct use of the program.
 *  Otherwise, shows the message and close the execution of the program.
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << argv[0] << ": Parameters missing." << std::endl
              << "./fechas - Gestión de fechas" << std::endl
              << "Use: ./fechas dd/mm/aa N fichero_salida.txt" << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int DiasTrascurridos(Date* fecha2){
  int dias_transcurridos{0};
  int anio{0};
  int month{0};
  int day{0};

  anio = this.year - fecha2.year;
  month = this.month - fecha2.month;
  day = this.day - fecha2.day;

  dias_transcurridos = anio + month + day;
  return dias_transcurridos;
}