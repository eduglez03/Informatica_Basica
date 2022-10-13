/*Escribir un programa en C++ que calcule y muestre la media de 3 calificaciones de alumnos de la asignatura Informática Básica. 
  El programa solicitará al usuario la calificación de cada uno de los 3 alumnos donde cada calificación será un valor numérico entre 0.0 y 10.0.*/

  #include<iostream>
  #include<vector>

  int main() {
    int<vector>calificaciones[3] = {};
    int media_total{0};

    std::cout << "Introduzca las calificaciones de los tres alumnos: " << std::endl;
    std::cin >> calificaciones[1] >> calificaciones[2] >> calificaciones[3];

    media_total = (calificaciones [1] + calificaciones[2] + calificaciones[3]) / 3;

    std::cout << "La media de los alumnos en Informática Básica es de: " << media_total << std::endl;

    return 0;
  }