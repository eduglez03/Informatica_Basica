#include <iostream>
#include <vector>
#include <string>

int main() {
  std::cout << "Programa que muestra en pantalla la palabra más corta y más larga de todas las palabras que teclee" << std::endl << std::endl;
  int numero_introducido{0};
  std::cout << "Digite el numero de palabras: ";
  std::cin >> numero_introducido;
  std::vector<std::string> palabras;
  std::string palabra_introducida;
  std::string palabra_larga;
  std::string palabra_corta;
  int longitud_mayor{0};
  int longitud_mayor2{0};
  int longitud_menor{0};
  int longitud_menor2{9999999};
  for (int contador = 0; contador < numero_introducido; ++contador) { 
    std::cout << "Digite la palabra n- "<< contador << ": ";
    std::cin >> palabra_introducida;
    palabras.push_back (palabra_introducida);
    longitud_mayor = palabra_introducida.length();
    longitud_menor = palabra_introducida.length();
    if (longitud_mayor > longitud_mayor2) {
        palabra_larga = palabra_introducida;
        longitud_mayor2 = longitud_mayor;
    }
    if (longitud_menor < longitud_menor2) {
        palabra_corta = palabra_introducida;
        longitud_menor2 = longitud_menor;
    } 
  }
  std::cout << "La palabra más larga es: " << palabra_larga << std::endl;
  std::cout << "La palabra más corta es: " << palabra_corta << std::endl;
  return 0;
}