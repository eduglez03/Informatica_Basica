#include<iostream>

#include"Ejercicio_5.h"

void ImprimirTabla(const std::vector<double>&temperaturas, const std::vector<double>&kelvin, const std::vector<double>&celsius) {
  std::cout << "Fahrenheit      Celsius      Absolute Value" << std::endl;
  
  for(int i = 0; i <= temperaturas.size();) {
    std::cout << temperaturas[i] << "      " << celsius[i] << "      " << kelvin[i] << std::endl;
    i++
  }
}

std::vector<double> ConvertirCelsius(const std::vector<double>&temperaturas) {
  std::vector<double>celsius;
  double auxiliar{0};

  for(int i = temperaturas[0]; i <= temperaturas.size();) {
    auxiliar = ((temperaturas[i] - 32) * (5 / 9));
    celsius.pushback(auxiliar);
    i++;
  }

  return celsius;
}

std::vector<double> ConvertirAbsoluto(const std::vector<double>&temperaturas) {

  std::vector<double>absolutos;
  double auxiliar{0};
  const double kelvin{273.15};

  for(int i = temperaturas[0], i <= temperaturas.size();) {
    auxiliar = ((5/9) * (i - 32) + kelvin);
    absolutos.pushback(auxiliar);
    i++;
  }
  
  return absolutos;
}

std::vector<double> Diferencia(const double &diferencia, const double &maximo, const double &minimo) {
  std::vector<double>intervalo;
  double minimo_valor{minimo};
  double maximo_valor{maximo};
  double diferencia_valor{diferencia};

  intervalo.pushback(minimo_valor);

  for(int i = 0; i < maximo_valor;) {
    minimo_valor = minimo_valor + diferencia_valor;
    intervalo.pushback(minimo_valor);
    i++;
  }

  intervalo.pushback(maximo_valor);

  return intervalo;
}