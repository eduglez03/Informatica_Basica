#include<iostream>
using namespace std;
int main() {

  float numero_1, numero_2, suma, resta, multiplicacion, division;
  cout<<"Introduzca un numero: "; cin>>numero_1;
  cout<<"Introduzca otro numero: "; cin>>numero_2;
  
  suma = numero_1 + numero_2;
  resta = numero_1 - numero_2;
  multiplicacion = numero_1 * numero_2;
  division = numero_1 / numero_2;
  
  if (numero_1 == numero_2) {
      cout<<"\nLos numero son iguales";
      cout<<"\nLa suma de ambos es: "<<suma;
      cout<<"\nLa resta de ambos es: "<<resta;
      cout<<"\nEl producto de ambos es: "<<multiplicacion;
      cout<<"\nLa division de ambos es: "<<division;
      cout<<endl;
  }
  else {
      
      cout<<"\nLos dos numeros son diferentes";
      if (numero_1 > numero_2) {
      cout<<"\nEl numero 1 es mayor que el dos";
      cout<<"\nLa suma de ambos es: "<<suma;
      cout<<"\nLa resta de ambos es: "<<resta;
      cout<<"\nEl producto de ambos es: "<<multiplicacion;
      cout<<"\nLa division de ambos es: "<<division;
      cout<<endl;
      }
      else {
      cout<<"\nEl numero 2 es mayor que el 1";
      cout<<"\nLa suma de ambos es: "<<suma;
      cout<<"\nLa resta de ambos es: "<<resta;
      cout<<"\nEl producto de ambos es: "<<multiplicacion;
      cout<<"\nLa division de ambos es: "<<division;
      cout<<endl;

      }
      
  }
  
  return 0;
}