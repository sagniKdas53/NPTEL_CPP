#include<iostream>
using namespace std;
class myClass1{
int a, b;
public:
myClass1(int _a, int _b) : a(_a), b(_b) {}
int mult(){ return a*b; }
};
class myClass2 : public myClass1{
public:
myClass2(int x) : myClass1(x,x){} //LINE-1
};
int main(){
myClass2 m(5);
cout << m.mult();
return 0;
}