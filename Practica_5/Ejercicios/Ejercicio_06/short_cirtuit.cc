
#include <iostream>
#include <string>
using namespace std;
  bool True(string id){
    cout << "True" << id << endl;
    return true;
  }

  bool False(string id){
    cout << "False" << id << endl;
    return false;
  }

  int main(){
    bool result;
   
    result =
        False("A") || False("B") && False("C"); 

    
    result =
        True("A") || False("B") && False("C"); 

    cout << result << " :=====================" << endl;

    return 0;
  }
