/*Escriba un programa temperatures.cc que lea un número entero que represente una temperatura dada en grados centígrados, y que diga si hace calor, 
  si hace frío o si está bien. Suponga que hace calor si la temperatura es superior a 30 grados, que hace frío si la temperatura es inferior a 10 grados, 
  y que se está bien en otro caso. Además, el programa ha de advertir si con la temperatura dada el agua herviría, o se congelaría. 
  Asuma que el agua hierve a 100 o más grados, y que el agua se congela a 0 o menos grados. */

  #include<iostream>


  void EstadoTemperatura(int temperatura) {
    if (temperatura >= 30) {
      std::cout << "Hace calor" << std::endl;
    } else if(temperatura <= 10) {
      std::cout << "Hace frío" << std::endl;
    } else{
        std::cout << "La temperatura está bien" << std::endl;
    }
  };

  void HierveAgua(int temperatura) {
    if (temperatura >= 100) {
      std::cout << "El agua hierve" << std::endl;
    } else if(temperatura <= 0){
        std::cout << "El agua se congelaría" << std::endl;
    }
  };
  
  int main() {
    int valor_temperatura{0};

    std::cout << "Introduzca el valor de la temperatura: " << std::endl;
    std::cin >> valor_temperatura;

    EstadoTemperatura(valor_temperatura);
    HierveAgua(valor_temperatura);

    return 0;
  }