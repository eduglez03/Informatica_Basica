/*Escribir un programa en C++ que calcule y muestre el coste de una carretera en función de (i) su longitud y (ii) el coste por metro. 
  El programa solicitará al usuario únicamente la cantidad de metros de longitud que tiene la carretera, mientras que el coste por metro 
  es un valor conocido de 1624 euros.*/

  #include<iostream>

  int main() {
    double longitud{0};
    const int coste_metro{1624};
    double coste_carretera{0};

    std::cout << "Introduzca la cantidad en metros de la carretera: " << std::endl;
    std::cin >> longitud;

    coste_carretera = coste_metro * longitud;

    std::cout << "El coste total de " << longitud << " metros de carretera es de: " << coste_carretera << std::endl;

    return 0;
  }