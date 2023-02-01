/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Date class Definition
 */

#ifndef DATE_H
#define DATE_H
#include <string>

void Usage(int argc, char* argv[]);
const std::string kHelpText = " HELP ME!";
/**
 * @brief Class Date
 */
class Date {
 public:
  /// Constructors
  Date() : day_introduced_{01}, month_introduced_{01}, year_introduced_{2010} {}
  Date(int day_introduced, int month_introduced, int year_introduced);
  /// Getters
  int DayGetter() const { return day_introduced_; }
  int MonthGetter() const { return month_introduced_; }
  int YearGetter() const { return year_introduced_; }
  /// Setters
  void DaySetter(const int kDayIntroduced) { day_introduced_ = kDayIntroduced; }
  void MonthSetter(const int kMonthIntroduced) {
    month_introduced_ = kMonthIntroduced;
  }
  void YearSetter(const int kYearIntroduced) {
    year_introduced_ = kYearIntroduced;
  }
  /// Methods
  bool IsLeapYear(const int kYear) const;
  void DatesFile(const int number_itineration_introduced, const std::string& file_name);
  int DiasTrascurridos(Date* fecha2);
  friend std::istream& operator>>(std::istream& in, Date& DateIntroduced);

 private:
  int day_introduced_;    /// Stores the day introduced.
  int month_introduced_;  /// Stores the month introduced.
  int year_introduced_;   /// Stores the year introduced.
};
std::ostream& operator<<(std::ostream& out, const Date& VectorIntroduced);
bool operator==(Date& date1, const Date& date2);
bool operator<(const Date& date1, const Date& date2);

#endif
