/*Escribir un programa en C++ que permita determinar el número de yenes equivalente a una cierta cantidad de euros. 
  Para ello, el programa solicitará al usuario que indique de cuántos euros dispone. Una vez introducido la cantidad de euros, 
  mostrará los yuanes equivalentes sabiendo que, a 18 de octubre de 2021, un yen es equivalente a 0.0075 euros de acuerdo a 
  Morningstar for Currency and Coinbase for Cryptocurrency. */

  #include<iostream>

  int main() {
    double cantidad_euros{0};
    const double yuanes{0,0075};
    double conversion{0};

    std::cout << "Introduzca la cantidad de euros que desea convertir: " << std::endl;
    std::cin >> cantidad_euros;

    conversion = cantidad_euros * yuanes;

    std::cout << cantidad_euros " euros, equivalen a: " << conversion << " yuanes" << std::endl;

    return 0;
  }