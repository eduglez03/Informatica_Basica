/*Escribir un programa en C++ que calcule la distancia entre 2 puntos, A y B en el espacio cartesiano de 3 dimensiones. Los puntos A y B tienen 3 coordenadas cada uno.*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
  
  float x1, x2, y1, y2, z1, z2;
  cout << "Introduce las coordenadas X del primer vector: "; cin >> x1;
  cout << "Introduce las coordenadas Y del primer vector: "; cin >> y1;
  cout << "Introduce las coordenadas Z del primer vector: "; cin >> z1;
  cout << "Introduce las coordenadas X del segundo vector: "; cin >> x2;
  cout << "Introduce las coordenadas Y del segundo vector: "; cin >> y2;
  cout << "Introduce las coordenadas Z del segundo vector: "; cin >> z2;
  double resultado;
  resultado = sqrt((x2 - x1) + (y2 - y1) + (z2 - z1));
  cout<<"\nLa distancia entre los dos puntos es: "<<resultado<<endl;
    
    return 0;
}