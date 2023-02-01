#include<iostream>
#include <stdio.h>
int main() {
 int contador(0);
 char caracter(0);
 std::cout<<"Codigo   Caracter"<<std::endl;

 for (contador=32; contador<=126; ++contador){

     caracter = contador;
    
    std::cout<<contador<<"         "<< caracter<< std::endl;
 }
 
    return 0;
}
