/*Escribir un programa en C++ que permita determinar el número de yenes equivalente a una cierta cantidad de euros. 
Para ello, el programa solicitará al usuario que indique de cuántos euros dispone. Una vez introducido la cantidad de euros, 
mostrará los yuanes equivalentes sabiendo que, a 18 de octubre de 2021, un yen es equivalente a 0.0075 euros de acuerdo a Morningstar for Currency and Coinbase for Cryptocurrency.*/

#include <iostream>

using namespace std;

int main() {

  float euros, conversion;
  double euroyenes;
  euroyenes = 0.0075;
  cout<<"Introduce cantidad en euros: "; cin>>euros;
  conversion = (euros / euroyenes);
  cout<<"\nLa conversion a yenes es: "<<conversion;
    
    return 0;
}