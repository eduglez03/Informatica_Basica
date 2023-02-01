#include <gtest/gtest.h>

#include "03-Date.h"

/**
 * Test para probar los constructores de la clase
 * No se comprueba la igualdad sobre números de tipo double por los
 * problemas de precisión.
 *
 * Se prueba que el valor devuelto sea igual al esperado por una diferencia
 * no mayor de epsilon (kEpsilon), un valor cercano a cero.
 *
 * @See https://stackoverflow.com/questions/12278523/comparing-double-values-in-c
 *
 */

/**
 * This test proof the Factorial Method.
 */
TEST(DateTest, Print) {
  Date date_test{1,2,2020};
  std::cout << date_test;
  EXPECT_EQ(true, date_test == );
}

/*
 * This test proof the operator <
 */
TEST(DateTest, CompareDates) {
  Date date_test_higher{1, 2, 2020};
  Date date_test_lower{12, 1, 2020};
  bool compare_dates{0};
  compare_dates = date_test_lower < date_test_higher;
  EXPECT_EQ(true, compare_dates == 1);
}

/*
 * This test proof the IsLeapYearMethod.
 */

TEST(DateTest, LeapYearCheck) {
  Date year_test_leap{1, 2, 2000};
  int year_extracted = year_test_leap.YearGetter();
  EXPECT_EQ(true, year_test_leap.IsLeapYear(year_extracted) == 1);
}


TEST(DateTest, DiasTranscurridos) {

  int kfecha1[3] = {10, 10, 2022};
  int kfecha2[3] = {10, 10, 2022};
  int anios{0};
  int mes{0};
  int dia{0};
  int tiempo_transcurrido{0};

  anios = (kfecha1[3] - kfecha2[3]);
  mes = (kfecha1[2] - kfecha2[2]);
  dia = kfecha1[1] - kfecha2[2]; 

  tiempo_transcurrido = anios + mes + dia;

  EXPECT_EQ(true, tiempo_transcurrido == 0);
}
