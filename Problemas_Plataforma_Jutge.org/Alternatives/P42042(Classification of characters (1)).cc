// ENUNCIADO PROBLEMA: https://jutge.org/problems/P42042_en

#include<iostream>

bool vocales(char vocales) {
  switch (vocales) {
  case 'a':
    std::cout << "lowercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true; 
    break;
  case 'e':
    std::cout << "lowercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true; 
    break;
  case 'i':
    std::cout << "lowercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true; 
    break;
  case 'o':
    std::cout << "lowercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true; 
    break;
  case 'u':
    std::cout << "lowercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true; 
    break;
  case 'A':
    std::cout << "uppercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true;
    break;
  case 'E':
    std::cout << "uppercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true;
    break;
  case 'I':
    std::cout << "uppercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true;
    break;
  case 'O':
    std::cout << "uppercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true;
    break;
  case 'U':
    std::cout << "uppercase" << std::endl;
    std::cout << "vowel" << std::endl;
    return true;
    break;
  default: return false;
    break;
  }
}

void consonantes(char consonante) {
  if (consonante == towlower(consonante)) {
    std::cout << "lowercase" << std::endl;
    std::cout << "consonant" << std::endl;
  } else {
    std::cout << "uppercase" << std::endl;
    std::cout << "consonant" << std::endl;
  }  
}


int main() {
  char letra_introducida;

  std::cout << "Introduzca un caracter minuscula o mayuscula: " << std::endl;
  std::cin >> letra_introducida;
  
  int retorno_vocales = vocales(letra_introducida);

  if (retorno_vocales == 1) {
    return 0;
  } else {
    consonantes(letra_introducida);
  }

  return 0;
}