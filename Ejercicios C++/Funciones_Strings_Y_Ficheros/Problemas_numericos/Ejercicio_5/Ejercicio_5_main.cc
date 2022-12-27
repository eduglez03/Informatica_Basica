#include<iostream>

#include"Ejercicio_5.h"

int main() {
  double minima_temp{0};
  double maxima_temp{0};
  double diferencia{0};

  std::vector<double>temperaturas;
  std::vector<double>kelvin;
  std::vector<double>celsius;

  std::cout << "Introduzca la minima temperatura: " << std::endl;
  std::cin >> minima_temp;
  std::cout << "Introduzca la maxima temperatura: " << std::endl;
  std::cin >> maxima_temp;
  std::cout << "Introduzca la diferencia entre temperaturas: " << std::endl;
  std::cin >> diferencia;

  temperaturas = Diferencia(const double &diferencia, const double &maximo, const double &minimo)
  kelvin = ConvertirAbsoluto(temperaturas);
  celsius = ConvertirCelsius(temperaturas);

  ImprimirTabla(temperaturas, kelvin, celsius);

  return 0;
}