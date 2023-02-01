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

TEST(VectorTest, equality) {
  Vector vector1{1.0, 2.0, 3.0};
  Vector vector2{1.0, 2.0, 3.0};
  Vector vector3{4.0, 5.0, 6.0};
  EXPECT_EQ(true, vector1 == vector2);
  EXPECT_EQ(false, vector1 == vector3);
}

TEST(VectorTest, sum) {
  Vector kVector1{8.0, 9.0, 10.0};
  Vector kvector2{3.0, 4.0, 5.0};
  Vector result{11.0, 13.0, 15.0};
  EXPECT_EQ(true, (kVector1 + kvector2 == result));
}

TEST(VectorTest, multiply) {
  Vector kVector1{2.0, 4.0, 6.0};
  double number{4.0};
  Vector result{8.0, 16.0, 24.0};
  EXPECT_EQ(true, (number * kVector1 == result));
}

TEST(VectorTest, scalar) {
  Vector kVector1{8.0, 9.0, 10.0};
  Vector kvector2{3.0, 4.0, 5.0};
  double result{110.0};
  EXPECT_EQ(true, (kVector1 * kvector2 == result));
}

TEST(VectorTest, module) {
  Vector kVector1{4.0, 3.0, 0.0};
  EXPECT_EQ(5.0, -kVector1);
}

TEST(VectorTest, normalize) {
  Vector kVector1{4.0, 3.0, 0.0};
  Vector result{0.8, 0.6, 0.0};
  EXPECT_EQ(result, !kVector1);
}

TEST(VectorTest, constructor) {
  const double kEpsilon = 1e-10;  // Un valor muy pequeño; prácticamente cero.
  Vector my_vector;

  EXPECT_EQ(true, my_vector.x() < kEpsilon);
  EXPECT_EQ(true, my_vector.y() < kEpsilon);
  EXPECT_EQ(true, my_vector.z() < kEpsilon);

  Vector another_vector{1.0, 2.0, 3.0};
  EXPECT_EQ(true, (my_vector.x() - 1.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.y() - 2.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.z() - 3.0 < kEpsilon));
}
