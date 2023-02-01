/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo González Gutiérrez
 * @date 15/12/2021
 * @brief Program that archives the words in a file by first letter;
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "funcion.h"

/**
 * Shows the proper usage of the program
 * In case the usage is incorrect, shows this message and exits
 * The program needs two files to work.
 *
 */
void Usage(int argc, char* argv[]) {
  std::string parameter{argv[1]};
  if (argc != 2) {
    std::cout << argv[0] << ": File(s) are missing" << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information"
              << std::endl;
    exit(EXIT_SUCCESS);
  } else if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * Archives words into files depending on the letter they start by
 *
 * @param original_file Inputed file
 */
void ArchiveIntoFiles(std::ifstream& original_file) {
  std::string word;
  std::ofstream a_file("a.txt");
  std::ofstream b_file("b.txt");
  std::ofstream c_file("c.txt");
  std::ofstream d_file("d.txt");
  std::ofstream e_file("e.txt");
  std::ofstream f_file("f.txt");
  std::ofstream g_file("g.txt");
  std::ofstream h_file("h.txt");
  std::ofstream i_file("i.txt");
  std::ofstream j_file("j.txt");
  std::ofstream k_file("k.txt");
  std::ofstream l_file("l.txt");
  std::ofstream m_file("m.txt");
  std::ofstream n_file("n.txt");
  std::ofstream o_file("o.txt");
  std::ofstream p_file("p.txt");
  std::ofstream q_file("q.txt");
  std::ofstream r_file("r.txt");
  std::ofstream s_file("s.txt");
  std::ofstream t_file("t.txt");
  std::ofstream u_file("u.txt");
  std::ofstream v_file("v.txt");
  std::ofstream w_file("w.txt");
  std::ofstream x_file("x.txt");
  std::ofstream y_file("y.txt");
  std::ofstream z_file("z.txt");

  while (original_file >> word) {
    if (word[0] == 'a') {
      a_file << word << std::endl;
    } else if (word[0] == 'b') {
      b_file << word << std::endl;
    } else if (word[0] == 'c') {
      c_file << word << std::endl;
    } else if (word[0] == 'd') {
      d_file << word << std::endl;
    } else if (word[0] == 'e') {
      e_file << word << std::endl;
    } else if (word[0] == 'f') {
      f_file << word << std::endl;
    } else if (word[0] == 'g') {
      g_file << word << std::endl;
    } else if (word[0] == 'h') {
      h_file << word << std::endl;
    } else if (word[0] == 'i') {
      i_file << word << std::endl;
    } else if (word[0] == 'j') {
      j_file << word << std::endl;
    } else if (word[0] == 'k') {
      k_file << word << std::endl;
    } else if (word[0] == 'l') {
      l_file << word << std::endl;
    } else if (word[0] == 'm') {
      m_file << word << std::endl;
    } else if (word[0] == 'n') {
      n_file << word << std::endl;
    } else if (word[0] == 'o') {
      o_file << word << std::endl;
    } else if (word[0] == 'p') {
      p_file << word << std::endl;
    } else if (word[0] == 'q') {
      q_file << word << std::endl;
    } else if (word[0] == 'r') {
      r_file << word << std::endl;
    } else if (word[0] == 's') {
      s_file << word << std::endl;
    } else if (word[0] == 't') {
      t_file << word << std::endl;
    } else if (word[0] == 'u') {
      u_file << word << std::endl;
    } else if (word[0] == 'v') {
      v_file << word << std::endl;
    } else if (word[0] == 'w') {
      w_file << word << std::endl;
    } else if (word[0] == 'x') {
      x_file << word << std::endl;
    } else if (word[0] == 'y') {
      y_file << word << std::endl;
    } else if (word[0] == 'z') {
      z_file << word << std::endl;
    }
  }
}