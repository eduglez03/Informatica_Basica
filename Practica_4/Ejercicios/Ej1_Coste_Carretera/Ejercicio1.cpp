/*Escribir un programa en C++ que calcule y muestre el coste de una carretera en función de 
(i) su longitud y (ii) el coste por metro. El programa solicitará al usuario únicamente la cantidad de metros de longitud que tiene la carretera, 
mientras que el coste por metro es un valor conocido de 1624 euros.*/


#include<iostream>

using namespace std;

int main() {
    
  float longitud, coste;
  int precio;
  precio = 1624;
  coste = (longitud * precio);
  cout<<"Introduce la longitud de la carretera: "; cin>>longitud;
  cout<<"\nEl coste de la carretera es: "<<coste;

    return 0;
}