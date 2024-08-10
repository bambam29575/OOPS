#include <iostream>
using namespace std;

class compare{
    int num;
  public:

  int get(){
    cin >> num;
  }
  int operator-(compare);
  
};
int compare::operator-(compare obj2){
  int res;
  res = num - obj2.num;
  return res;
}


int main(){
   compare obj1, obj2;
   cout << "enter object 1 num" << endl;
   obj1.get();
   cout << "enter object 2 num" << endl;
   obj2.get();
   cout << obj1-obj2;

  return 0;
}
