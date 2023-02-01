/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date Dec 21 2021
 * @brief Este es un programa que usa la clase racionales para hacer pruebas con
 * ellos
 */

// This is an include guard.
// You could alternatively use '#pragma once'
// See https://en.wikipedia.org/wiki/Include_guard
#if !defined(HELLO_WORLD_H)
#define HELLO_WORLD_H

// Include the string header so that we have access to 'std::string'
#include <string>

// Declare a namespace for the function(s) we are exporting.
// https://en.cppreference.com/w/cpp/language/namespace
namespace hello_world {

// Declare the 'hello()' function, which takes no arguments and returns a
// 'std::string'. The function itself is defined in the hello_world.cpp source
// file. Because it is inside of the 'hello_world' namespace, it's full name is
// 'hello_world::hello()'.
std::string hello();

}  // namespace hello_world

#endif
