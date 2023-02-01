#include<iostream>
#include<cmath>

using namespace std;

int main() {

    float cateto1, cateto2, hipotenusa;

    cout<<"Introduzca el valor del cateto 1: "; cin>>cateto1;
    cout<<"Introduzca el valor del cateto 2: "; cin>>cateto2;

    hipotenusa = sqrt(((cateto1) * (cateto1)) + ((cateto2) * (cateto2)));

    cout<<"\nLa hipotenusa es: " <<hipotenusa;

    return 0;
}