#include<iostream>

void Conversor(std::string cadena) {
  
  for (int i = 0; i <= cadena.size();) {
    if (cadena[i] == tolower(cadena[i])) {
      cadena[i] = toupper(cadena[i]);
    } else {
        cadena[i] = tolower(cadena[i]);
    }

    i++;
  }

  std:: cout << cadena << std::endl;
  
}