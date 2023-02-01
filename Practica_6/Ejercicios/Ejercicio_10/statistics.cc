#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
  vector<int> numeros;
  srand(time(0));
  int x;
  for (int i = 0; i < 10; i++) {
    x = (rand() % 10);
    numeros.emplace_back = x;
    cout << x << "\t";
  }
  
  

  
  return 0;
}