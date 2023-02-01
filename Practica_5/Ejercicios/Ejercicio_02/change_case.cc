/*Escriba un programa change_case.cc que solicite al usuario una letra. Si la que introduce el usuario es minúscula, ha de imprimir la correspondiente mayúscula y viceversa. 
El programa deberá asegurarse de que el usuario introduzca una letra y no otro carácter que fuera no adecuado a lo que el programa solicita.*/

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void Mayuscula(string &pal) {
  for (int i = 0; i < pal.length(); i++) {
    pal[i] = towupper(pal[i]);
  }
}
int main() {
  string letra;
  cout<<"Introduzca una letra: "; cin>>letra;
  Mayuscula(letra);
  cout<<endl;
  cout<<letra;
  
  return 0;
}