#include <iostream>
using namespace std;

class compare{
    int num;
  public:

  void get(){
    cin >> num;
  }
  
};
void compare::comparison(commpare obj2){
  void comparison(compare obj2){
  if(num == obj2.num){
    cout << "objects are equal";
  }
  else{
    cout << "objects are not equal";
  }
}
}

int main(){
   compare obj1, obj2;
   cout << "enter object 1 num" << endl;
   obj1.get();
   cout << "enter object 2 num" << endl;
   obj2.get();
   obj1.comparison(obj2);

  return 0;
}
