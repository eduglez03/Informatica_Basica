#include <gtest/gtest.h>

#include "complex.h"

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


TEST(ComplexTest, suma) {
  Complex kComplex1{5,7};
  Complex kComplex2{2,6};
  Complex result{7,13};
  EXPECT_EQ(true, (kComplex1 + kComplex2 == result));
}

TEST(ComplexTest, resta) {
  Complex kComplex1{5,7};
  Complex kComplex2{2,6};
  Complex result{3,1};
  EXPECT_EQ(true, (kComplex1 + kComplex2 == result));
}