#include<iostream>
#include<math.h>
using namespace std;

int main() {
  float numero_1, numero_2, numero_3, numero_4, potencia1, potencia2;
  cout<<"Introduzca el primer numero: "; cin>>numero_1;
  cout<<"Introduzca el segundo numero: "; cin>>numero_2;
  cout<<"Introduzca el tercer numero: "; cin>>numero_3;
  cout<<"Introduzca el cuarto numero: "; cin>>numero_4;
  
  potencia1 = pow(numero_1, numero_2);
  potencia2 = pow(numero_3, numero_4);
  
  cout<<"entrada            salida"<<endl;
  cout<<numero_1 <<"," << numero_2 <<"     " <<potencia1<<endl;
  cout<<numero_1 <<"," << numero_4 <<"     " <<potencia2<<endl;

  return 0;
}