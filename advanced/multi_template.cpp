#include<iostream>
#include <typeinfo>
using namespace std;
 
template<class T, class U>
class A  {
    T x;
    U y;
public:
    A() {    cout<<"Constructor Called"<<endl;   }
};

// typeid
int niam(int x,int y)  {
   A<char, char> a;
   A<int, double> b;
   //A<typeid(x).name(), typeid(y).name()> c;
   return 0;
}

int main () {
  int * a,b;
  a=0; b=0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:\n";
    cout << "a is: " << typeid(a).name() << '\n';
    cout << "b is: " << typeid(b).name() << '\n';
  }
  niam(10,39);
  return 0;
}
 
