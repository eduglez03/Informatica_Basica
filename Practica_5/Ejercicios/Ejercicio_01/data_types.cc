/*Escriba en C++ un programa data_types.cc que imprima en pantalla la cantidad de memoria que utiliza su compilador para almacenar cada uno de los tipos básicos del lenguaje.*/

#include<iostream>
using namespace std;
int main() {
  cout<<"\nLa cantidad de memoria que emplea el tipo int en bytes es: " <<sizeof(int);
  cout<<"\nLa cantidad de memoria que emplea el tipo float en bytes es: " <<sizeof(float);
  cout<<"\nLa cantidad de memoria que emplea el tipo double en bytes es: " <<sizeof(double);
  cout<<"\nLa cantidad de memoria que emplea el tipo char bytes es: " <<sizeof(char);
  cout<<"\nLa cantidad de memoria que emplea el tipo bool bytes es: " <<sizeof(bool);
  return 0;
}