#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    Base(int _x) : x(_x) {}
    void fun() { cout << x; }
    //    virtual void fun() { cout << x; } prints 53
};
class Derived : public Base
{
    int y;

public:
    Derived(int _x, int _y) : Base(_x), y(_y) {}
    void fun() { cout << y; }
};
int main()
{
    Base *b1 = new Base(5);
    Base *b2 = new Derived(2, 3);
    b1->fun();
    b2->fun();
    return 0;
}