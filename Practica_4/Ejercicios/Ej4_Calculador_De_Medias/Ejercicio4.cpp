/*Escribir un programa en C++ que calcule y muestre la media de 3 calificaciones de alumnos de la asignatura Informática Básica. 
El programa solicitará al usuario la calificación de cada uno de los 3 alumnos donde cada calificación será un valor numérico entre 0.0 y 10.0.*/

#include<iostream>

using namespace std;

int main() {

  float calificacion1alumno, calificacion2alumno, calificacion3alumno, media;
  cout<<"Introduzca la calificacion del primer alumno: "; cin>>calificacion1alumno;
  cout<<"Introduzca la calificacion del segundo alumno: "; cin>>calificacion2alumno;
  cout<<"Introduzca la calificacion del tercer almuno: "; cin>>calificacion3alumno;
  media = ((calificacion1alumno + calificacion2alumno + calificacion3alumno) / 3);
  cout<<"\nLa media total es: "<<media<<endl;

  return 0;
}