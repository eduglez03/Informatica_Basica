#include<iostream>
using namespace std;

int Area_rectangulo(int argc, char *argv[]) {
    int base, altura,area;
    cout<<"Ingrese la base "<<endl;
    cin>>base;
    cout<<"Ingrese la altura"<<endl;
    cin>>altura;
    area=base*altura;
    cout<<"El area del Rectangulo es :"<<area<<endl;
    return 0;
}
int Area_circulo() {
  const float PI=3.1416;
  float radio;
  cout<<"*****area de un circulo*****"<<endl<<endl;
  cout<<endl;
  cout<<"ingresa el radio:"<<endl;
  cin>>radio;
  cout<<endl;
  cout<<"el area es: " <<endl <<(radio*radio)*PI<<endl<<endl;
   return 0;
}

int main() {
  int numero_areas;
  char c, r;
  int areas[numero_areas];
  cout << "Cuantas areas quiere calcular: "; cin >> numero_areas;
  if(cin >> r ){
    


    
  }
  for(i = 0; i<=areas; ++i){
    cout << "Rectangulo o circulo?: ";



  }









 return 0;
}