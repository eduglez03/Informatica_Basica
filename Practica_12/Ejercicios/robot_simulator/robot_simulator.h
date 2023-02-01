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

#ifndef ROBOT_SIMULATOR_H

#define ROBOT_SIMULATOR_H

#include <string>
#include <utility>

namespace robot_simulator {
/*
 * @brief list of the positions we will use
 * @param NORTH: north direction
 * @param SOUTH: south direction
 * @param WEST: west direction
 * @param EAST: east direction
 */
enum Bearing {
  NORTH,
  SOUTH,
  WEST,
  EAST,
};

class Robot {
 private:
  std::pair<int, int> position;
  Bearing bearing;

 public:
  Robot() {
    position = {0, 0};
    bearing = NORTH;
  }

  Robot(std::pair<int, int> position, Bearing bearing) {
    this->position = position;
    this->bearing = bearing;
  }

  std::pair<int, int> get_position() const { return position; }
  Bearing get_bearing() const { return bearing; }

  /*
   * @brief turn left
   * @param[in] position (const)
   * @param[in] bearing
   */
  void turn_left() {
    switch (bearing) {
      case NORTH:
        bearing = WEST;
        break;
      case SOUTH:
        bearing = EAST;
        break;
      case EAST:
        bearing = NORTH;
        break;
      case WEST:
        bearing = SOUTH;
        break;
    }

    /*
     * @brief turn right
     * @param[in] position (const)
     * @param[in] bearing
     */
  }
  void turn_right() {
    switch (bearing) {
      case NORTH:
        bearing = EAST;
        break;
      case SOUTH:
        bearing = WEST;
        break;
      case EAST:
        bearing = SOUTH;
        break;
      case WEST:
        bearing = NORTH;
        break;
    }
    /*
     * @brief advance
     * @param[in] position (const)
     * @param[in] bearing
     */
  }
  void advance() {
    switch (bearing) {
      case NORTH:
        position.second++;
        break;
      case SOUTH:
        position.second--;
        break;
      case EAST:
        position.first++;
        break;
      case WEST:
        position.first--;
        break;
    }
    /*
     * @brief moves the robot depending the letter used
     * @param[in] letter char
     * @param[in] letter char
     * @param[in] letter char
     * @return turn right if the letter is R
     * @return turn left if the letter is L
     * @return advance if the letter is A
     */
  }
  void execute_sequence(const std::string& seq) {
    for (char sequence : seq) {
      if (sequence == 'R') {
        turn_right();

      } else if (sequence == 'L') {
        turn_left();

      } else if (sequence == 'A') {
        advance();
      }
    }
  }
};

}  // namespace robot_simulator

#endif
