#include<iostream>
using namespace std;
int main() {

  bool p;
  cout<<  "p     !p" <<endl;
  cout<<"------ ------" <<endl;
  cout<<true << "      " << !true <<endl;
  cout<<false <<"      " << !false <<endl;
  cout<<endl;

  cout<<"p q   p && q" <<endl;
  cout<<"----- -------" <<endl;
  cout<< false <<" " << false << "    " << (false && false) << endl;
  cout<< false <<" " << true <<  "    " << (false && true) << endl;
  cout<< true <<" " << false <<  "    " << (true && false) << endl;
  cout<< true <<" " << true <<   "    " << (true && true) << endl;
  cout << endl;

  cout<<" p q     p || q" <<endl;
  cout<<"-----   --------" <<endl;
  cout<< false <<"  " << false <<  "    " << (false || false) << endl;
  cout<< false <<"  " << true <<   "    " << (false || true) << endl;
  cout<< true <<"  " << false <<  "    " << (true || false) << endl;
  cout<< true <<"  " << true <<   "    " << (true || true) << endl;
  cout << endl;

  return 0;
}