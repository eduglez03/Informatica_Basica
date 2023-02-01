// Programa que lee un año y muestra si es o no bisiesto
#include <iostream>
using namespace std;
int main() {
  int anio;
  cout << "Este programa determina si un anio introducido es bisiesto o no" << endl;
  cout<<"Introduce año: "; cin >> anio;
  if(anio%4==0 and anio%100!=0 or anio%400==0)
    cout << "Bisiesto" << endl;
  else
    cout << "No es bisiesto" << endl;
  return 0;
}