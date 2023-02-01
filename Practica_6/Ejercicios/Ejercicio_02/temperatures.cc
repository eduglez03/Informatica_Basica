#include<iostream>
using namespace std;

int main() {
  double temperatura;
  cout << "Este programa valora si hace calor o frio en funsión de la temperatura, e indica si el agua hierve o se congela" << endl;
  cout << "Introduzca la temperatura que hace: "; cin >> temperatura;
  if (temperatura > 30) {
    cout << "Hace calor" <<endl;
    if (temperatura >= 100) {
      cout << "El agua herviría a esta temperatura" << endl;
    }
  }
  else if (temperatura < 10) {
    cout << "Hace frio" <<endl;
    if (temperatura <= 0) {
      cout << "El agua se congelaría a esta temperatura" << endl;
    }
  }
  else {
    cout << "La temperatura es adecuada" <<endl;
  }
  return 0;
}