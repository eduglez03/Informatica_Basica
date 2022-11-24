// ENUNCIADO PROBLEMA: https://jutge.org/problems/P90226_en

#include<iostream>
#include<string.h>


int main() {  
  
  std::string palabra_a;
  std::string palabra_b;

  int tamano_a{0};
  int tamano_b{0};
  int tamanogrande;
  std::cout << "Introduzca dos palabra: " << std::endl;
  std::cin >> palabra_a >> palabra_b;

  tamano_a = palabra_a.size();
  tamano_b = palabra_b.size();
  
  if (palabra_a == palabra_b) {
    std::cout << palabra_a << " = " << palabra_b << std::endl;
  } else {
    for (int i = 0; i <= tamano_a; i++) {
      /* code */
    } 
  }
  
  if (palabra_a < palabra_b) {
    tamanogrande = palabra_b.size();
  } else{
    tamanogrande = palabra_a.size();
  }

  for (int i = 0; i <= tamanogrande; i++) {
    if (palabra_a[i] > palabra_b[i]) {
      std::cout << palabra_b << " < " << palabra_a << std::endl;;
      break;
    }
    if (palabra_a[i] < palabra_b[i]) {
      std::cout << palabra_a << " < " << palabra_b << std::endl;
      break;    
    }
    
  }
  
  return 0;
}