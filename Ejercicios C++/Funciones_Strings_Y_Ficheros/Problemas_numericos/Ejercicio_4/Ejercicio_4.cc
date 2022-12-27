#include<iostream>

#include"Ejercicio_4.h"

bool EsBisiesto(const int &year) {
  if(year % 4 == 0) {
    return true;
  } else {
      return false;
  }
}