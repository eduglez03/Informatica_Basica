#include<iostream>

int main() {
  int numero_introducido{0};
  int numero_division{0};
  std::vector<int>invertido;

  std::cout << "Introduzca un número entero: " << std::endl;
  std::cin >> numero_introducido;

  

  
  numero_division = numero_introducido / 10;
  i = numero_introducido % 10; 
  invertido.pushback(i);

  
  i = numero_division % 10;
  invertido.pushback(i);
  numero_division = numero_division / 10;

  i = numero_division % 10;
  invertido.pushback(i);





  for(int i = 0; i <= 3) {
    std::cout << invertido[i];
  }

  std::cout << std::endl;




  return 0;
}