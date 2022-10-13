/*Escribir un programa en C++ que calcule el área y el perímetro de un cuadrado. El programa solicitará la longitud del lado del cuadrado y 
  luego mostrará en pantalla un mensaje con el perímetro y el área. */

  #include<iostream>

  int main() {
    double longitud_lado{0};
    double perimetro{0};
    double area{0};

    std::cout << "Introduzca la longitud del lado del cuadrado: " << std::endl;
    std::cin >> longitud_lado;

    perimetro = longitud_lado * 4;
    area = longitud_lado * longitud_lado;

    std::cout << "El perimetro del cuadrado es de: " << perimetro << "y su area de: " << area << std::endl;




    return  0;
  }