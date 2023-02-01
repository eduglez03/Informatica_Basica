/*Escribir un programa en C++ que calcule el área y el perímetro de un cuadrado. 
El programa solicitará la longitud del lado del cuadrado y luego mostrará en pantalla un mensaje con el perímetro y el área.*/

#include<iostream>

using namespace std;

int main() {

  float ladocuadrado, area, perimetro;
  cout<<"Introduce la longitud del lado del cudrado: "; cin>>ladocuadrado;
  area = (ladocuadrado * ladocuadrado);
  perimetro = (4 * ladocuadrado);
  cout<<"\nEl area del cudrado es: "<<area<<endl;
  cout<<"\nEl perimetro del cuadrado es: "<<perimetro<<endl;
  
  return 0;
}