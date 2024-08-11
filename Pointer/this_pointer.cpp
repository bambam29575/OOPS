#include <iostream>
using namespace std;

class B;
class A{
  int x;
  public:
  void set(int x){
    this->x = x;
  }
  friend void add(A,B);
};
class B{
  int y; 
  public:
  void set(int y){
    this->y = y;
  }
  friend void add(A,B);
};
void add(A o1,B o2){
  cout << o1.x + o2.y;
}

int main(){
  A a;
  A *aptr;

  B b;
  B *bptr;
  bptr = &b;
  
  aptr = &a;
  bptr->set(2);
  aptr->set(3);
  add(a,b);
     
  return 0;
}
