/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Vector class Definition
 */

#ifndef COMPUTEINT_H
#define COMPUTEINT_H

/**
 * @brief ComputeInt class
 */
class ComputeInt {
 public:
  ComputeInt() : number1_{0}, number2_{0} {}
  ComputeInt(int number1) : number1_{number1} {}
  ComputeInt(int number1, int number2) : number1_{number1}, number2_{number2} {}
  int GetNumber1() const { return number1_; };
  int GetNumber2() const { return number2_; };
  int Factorial(const int number1) const;
  int SumSeries(const int number1) const;
  bool IsArmstrong(const int number1) const;
  bool IsPerfect(const int number1) const;
  bool IsPrime(const int number1) const;
  bool IsPerfectPrime(const int number1) const;
  bool IsBalanced(const int number1) const;
  bool AreRelativesPrimes(const int number1, const int number2) const;

 private:
  int number1_;
  int number2_;
};

#endif
