/*Escribir un programa en C++ que solicite al usuario la cantidad de monedas 1, 5, 20 y 50 céntimos 
así como los billetes de 5, 10, 20, 50, 100, 200 y 500 que tiene y calcule y muestre la cantidad de dinero de la que dispone.*/

#include <iostream>

using namespace std;

int main() {

  int monedas1centimo, monedas5centimos, monedas20centimos, monedas50centimos, resultado;
  int billetes5euros, billetes10euros, billetes20euros, billetes50euros, billetes100euros, billetes200euros, billetes500euros;
  cout<<"¿Cuantas monedas de 1 centimo tiene?: "; cin>>monedas1centimo;
  cout<<"¿Cuantas monedas de 5 centimos tiene?: "; cin>>monedas5centimos;
  cout<<"¿Cuantas monedas de 20 centimos tiene?: "; cin>>monedas20centimos;
  cout<<"¿Cuantas monedas de 50 centimos tiene?: "; cin>>monedas50centimos;
  cout<<"¿Cuantos billetes de 5 euros tiene?: "; cin>>billetes5euros;
  cout<<"¿Cuantos billetes de 10 euros tiene?: "; cin>>billetes10euros;
  cout<<"¿Cuantos billetes de 20 euros tiene?: "; cin>>billetes20euros;
  cout<<"¿Cuantos billetes de 50 euros tiene?: "; cin>>billetes50euros;
  cout<<"¿Cuantos billetes de 100 euros tiene?: "; cin>>billetes100euros;
  cout<<"¿Cuantos billetes de 200 euros tiene?: "; cin>>billetes200euros;
  cout<<"¿Cuantos billetes de 500 euros tiene?: "; cin>>billetes500euros;
  resultado = (monedas1centimo * 0.01) + (monedas5centimos * 0.05) + (monedas20centimos * 0.20) + (monedas50centimos * 0,50) + (billetes5euros * 5) + (billetes10euros * 10) + (billetes20euros * 20) + (billetes50euros * 50) + (billetes100euros * 100) + (billetes200euros * 200) + (billetes500euros * 500);
  cout<<"\nLa cantidad de dinero que tiene es: "<<resultado;

    return 0;
}