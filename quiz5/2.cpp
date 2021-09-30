#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    Base(int _x) : x(_x) {}
    int fun() { return x; }
};
class Derived : public Base
{
    int y;

public:
    Derived(int _x, int _y) : Base(_x) ,y(_y) {} //LINE-1
    void fun() { cout << Base::fun() << y; }
}; 
int main()
{
    Derived *b2 = new Derived(2, 3);
    b2->fun();
    return 0;
}