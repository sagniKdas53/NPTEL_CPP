#include<iostream>
using namespace std;
class A1{
public:
virtual void fun() { cout << "A::fun() "; }
};
class A2 : public A1{
public:
void fun(){ cout << "B::fun() "; }
};
class A3 : public A2{
public:
void fun(){ cout << "C::fun() "; }
};
int main(){
A1 *cb = new A2(); //LINE-1
cb->fun();
return 0;
}