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

#ifndef UUID_12D5B2D4_F508_4157_9892_085096748F6A
#define UUID_12D5B2D4_F508_4157_9892_085096748F6A
#include <string>
#include <utility>
namespace robot_simulator {
using Position = std::pair<int, int>;
enum class Bearing { NORTH, EAST, SOUTH, WEST };
class Robot {
 public:
  Robot() = default;
  Robot(Position position, Bearing bearing);
  [[nodiscard]] Position get_position() const;
  [[nodiscard]] Bearing get_bearing() const;
  void advance();
  void turn_left();
  void turn_right();
  void execute_sequence(const std::string& sequence);

 private:
  Position position_ = {0, 0};
  Bearing bearing_ = Bearing::NORTH;
};
}  // namespace robot_simulator
#endif  // UUID_12D5B2D4_F508_4157_9892_085096748F6A