// ENUNCIADO PROBLEMA: https://jutge.org/problems/P78142_en

#include<iostream>
#include <vector>
#include<iomanip>

int main() {
  std::vector<int> numeros;
  int media{0};
  double media_total{0};
  double introducido{0};

  std::cout << "Introduzca números: " << std::endl;



  while(std::cin >> introducido){

    if(introducido == 'd') {
        break;
    } else {        
        numeros.push_back(introducido);
        for (int i = 0; i <=  numeros.size();) {
          media = media + numeros[i];
          i++;
        }
        media_total = media / numeros.size();
      }
  }

  std::cout << std::setprecision(2) << media_total << std::endl;

  return 0;
}



// ARREGLAR
