/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief El programa desencripta mensajes codificados mediante el cifrado
 * caesar.
 * @bug No hay bugs conocidos
 * @see https://jutge.org/problems/P75810_en
 */

#include <iostream>
#include <string>

/** Busca el nuero clave para decodificar el cifrado caesar.
 *
 *  @param[in] str Nombre de la string de entrada
 *  @return devuelve un entero
 */
int Key(std::string str) {
  int count{0}, size = (str.size() - 2);
  for (int i = 65; i <= 90; ++i) {
    if (str[size] != 'R') {
      ++str[size];
      if (str[size] == 91) {
        str[size] = 65;
      }
      ++count;
    }
  }
  return count;
}

/** decodifica una mensaje cifrado por caesar.
 *
 *  @param[in] str Nombre de la string
 *  @return devuelve una string
 */
std::string Desencrypt(std::string str) {
  std::string decodif;
  int key = Key(str);
  for (auto chars : str) {
    if (chars >= 65 && chars <= 91) {
      for (int i = 0; i < key; ++i) {
        ++chars;
        if (chars == 91) {
          chars = 65;
        }
      }
      decodif.push_back(chars);
    }
  }
  return decodif;
}

/** Main function
 *
 */
int main() {
  int number;
  std::string str;
  std::cin >> number;
  for (int i = 0; i < number; ++i) {
    std::cin >> str;
    std::cout << Desencrypt(str) << std::endl;
  }
  return 0;
}