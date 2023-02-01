#include<iostream>
using namespace std;
int main() {
  char letra;
  cout << "Introduce una letra: "; cin >> letra;
  if (/* condition */)
  {
      /* code */
  }
  
  switch (letra) {
      case 'a': cout<<"Es una vocal minuscula"; break;
      case 'e': cout<<"Es una vocal minuscula"; break;
      case 'i': cout<<"Es una vocal minuscula"; break;
      case 'o': cout<<"Es una vocal minuscula"; break;
      case 'u': cout<<"Es una vocal minuscula"; break;
      case 'A': cout<<"Es una vocal mayuscula"; break;
      case 'E': cout<<"Es una vocal mayuscula"; break;
      case 'I': cout<<"Es una vocal mayuscula"; break;
      case 'O': cout<<"Es una vocal mayuscula"; break;
      case 'U': cout<<"Es una vocal mayuscula"; break;
      default: cout<<"No es una vocal, es una consonate"; break;
  }
  return 0;
}