#include <iostream>
using namespace std;

class complex{
  int real, imag;
  public:
  void get(){
    cout << "Enter real and imaginary part" << endl;
    cin >> real >> imag;
  }
  void display(){
    cout << real <<"+" << imag << "i";
  }
  complex operator+(complex obj2){
    complex res;
    res.real = real+obj2.real;
    res.imag = imag+obj2.imag;
    return res;
  }
};

int main(){
    complex obj1, obj2, obj3;
    obj1.get();
    obj2.get();
    obj3 = obj1+obj2;
    obj1.display();
     cout << "+"; 
     obj2.display();
     cout << "=";
     obj3.display();
     
  return 0;
}      
