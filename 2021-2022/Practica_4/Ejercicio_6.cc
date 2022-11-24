/*Escribir un programa en C++ que calcule la distancia entre 2 puntos, A y B en el espacio cartesiano de 3 dimensiones. 
  Los puntos A y B tienen 3 coordenadas cada uno. Es decir,

                                      A = (x_1, y_1, z_1)
                                      B = (x_2, y_2, z_2)

  El usuario introducirá los valores de x_1, y_1, z_1, x_2, y_2, z_2. Una vez introducidos los valores el programa calculará y 
  mostrará la distancia entre los puntos, donde la distancia entre A y B viene definida por la siguiente expresión: 
                         
                                dist(A, B) = sqrt((x2-x1) + (y2-y1) + (z2-z1)) 

  Para calcular la raíz cuadrada ha de usarse la función sqrt(). En este tutorial tiene información sobre el uso de esta función. 
  No olvide incluir el fichero cmath para poder utilizarla en su código.*/



  #include<iostream>
  #include<cmath>

  int main() {
    int vector_1[4] = {};
    int vector_2[4] = {};
    int distancia_puntos{0};

    std::cout << "Introduzca las cordenadas x, y , z del primer vector: " << std::endl;
    std::cin >> vector_1[1] >> vector_1[2] >> vector_1[3];

    std::cout << "Introduzca las cordenadas x, y , z del segundo vector: " << std::endl;
    std::cin >> vector_2[1] >> vector_2[2] >> vector_2[3];

    distancia_puntos = sqrt((vector_2[1] - vector_1[1]) + (vector_2[2] - vector_1[2]) + (vector_2[3] - vector_1[3]));

    std::cout << "La distancia entre ambos puntos es de: " << distancia_puntos << std::endl;


    return 0;
  }