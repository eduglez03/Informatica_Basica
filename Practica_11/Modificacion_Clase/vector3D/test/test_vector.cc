#include <gtest/gtest.h>

#include "vector.h"

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
TEST(VectorTest, constructor) {
  const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
  Vector my_vector;

  EXPECT_EQ(true, my_vector.x() < kEpsilon);
  EXPECT_EQ(true, my_vector.y() < kEpsilon);
  EXPECT_EQ(true, my_vector.z() < kEpsilon);

  Vector another_vector{1.0, 2.0, 3.0};
  EXPECT_EQ(true, (my_vector.x() - 1.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.y() - 2.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.z() - 3.0 < kEpsilon));
}

// Incluya tests adicionales para el resto de métodos de la clase



/**
 * Test que prueba si dos vectores son iguales
 * Hay que sobrecargar el operador de igualdad para comprobar este código
 */

/*
TEST(VectorTest, iguales) {
    Vector v1{1.0, 2.0, 3.0};
    Vector v2{1.0, 2.0, 3.0};
    Vector v3{4.0, 5.0, 6.0};

    EXPECT_EQ(true, v1 == v2);
    EXPECT_EQ(false, v1 == v3);
}
*/
