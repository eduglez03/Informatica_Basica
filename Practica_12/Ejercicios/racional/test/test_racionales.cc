#include <gtest/gtest.h>

#include "racionales.h"

TEST(RationalTest, default_constructor) {
  Rational empty_rational{};
  EXPECT_EQ(0, empty_rational.GetNumerator());
  EXPECT_EQ(1, empty_rational.GetDenominator());
}

TEST(RationalTest, constructor) {
  Rational example_rational{7, 2};
  EXPECT_EQ(7, example_rational.GetNumerator());
  EXPECT_EQ(2, example_rational.GetDenominator());
}

TEST(RationalTest, addition) {
  Rational first_rational{5, 4};
  Rational second_rational{7, 4};
  Rational expected_rational{12, 4};
  EXPECT_EQ(expected_rational, first_rational + second_rational);
}

TEST(RationalTest, substraction) {
  Rational first_rational{5, 4};
  Rational second_rational{7, 4};
  Rational expected_rational{-2, 4};
  EXPECT_EQ(expected_rational, first_rational - second_rational);
}

TEST(RationalTest, multiplication) {
  Rational first_rational{5, 4};
  Rational second_rational{7, 4};
  Rational expected_rational{35, 16};
  EXPECT_EQ(expected_rational, first_rational * second_rational);
}

TEST(RationalTest, division) {
  Rational first_rational{5, 4};
  Rational second_rational{7, 4};
  Rational expected_rational{20, 28};
  EXPECT_EQ(expected_rational, first_rational / second_rational);
}

TEST(RationalTest, write) {
  // Try setters with parameters
  Rational first_rational{5,4};
  std::string expected_return = "5/4";
  EXPECT_EQ(expected_return, first_rational.Write());
}

TEST(RationalTest, mcm) {
  EXPECT_EQ(12, Mcm(6, 4));
}

TEST(RationalTest, mcd) {
  EXPECT_EQ(9, Mcd(9, 27));
}

TEST(RationalTest, addition) {
  Rational first_rational{5, 4};
  Rational second_rational{7, 6};
  Rational expected_rational = first_rational;
  EXPECT_EQ(expected_rational);
}




