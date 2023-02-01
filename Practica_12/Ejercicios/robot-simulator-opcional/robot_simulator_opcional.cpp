/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Este es un programa que usa la clase robot_simulator para hacer pruebas con
 * ellos
 */

#include "robot_simulator_opcional.h"
using robot_simulator::Bearing;
using robot_simulator::Position;
using robot_simulator::Robot;
Robot::Robot(Position position, Bearing bearing)
    : position_(position), bearing_(bearing) {}
Position Robot::get_position() const { return position_; }
Bearing Robot::get_bearing() const { return bearing_; }
/**
 * @brief Método de avance
 *
 */
void Robot::advance() {
  switch (bearing_) {
    case Bearing::SOUTH:
      --position_.second;
      break;
    case Bearing::NORTH:
      ++position_.second;
      break;
    case Bearing::WEST:
      --position_.first;
      break;
    case Bearing::EAST:
      ++position_.first;
      break;
  }
}
/**
 * @brief Método de giro a la izquiera
 *
 */
void Robot::turn_left() {
  bearing_ = static_cast<Bearing>((static_cast<int>(bearing_) + 3) % 4);
}
/**
 * @brief Método de giro a la derecha
 *
 */
void Robot::turn_right() {
  bearing_ = static_cast<Bearing>((static_cast<int>(bearing_) + 1) % 4);
}
/**
 * @brief Método para ejecutar la secuencia
 *
 * @param sequence
 */
void Robot::execute_sequence(const std::string& sequence) {
  for (auto c : sequence) {
    switch (c) {
      case 'A':
        advance();
        break;
      case 'L':
        turn_left();
        break;
      case 'R':
        turn_right();
        break;
    }
  }
}
