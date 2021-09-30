#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    Base(int a) : x(a) {}
    void fun()
    {
        cout << x;
    }
};
class Derived : public Base
{
    int y;

public:
    Derived(int a, int b) : Base(a), y(b) {}
    void fun()
    {
        cout << y;
    }
};

int main()
{
    Derived d(1, 2);
    d.Base::fun();
    return 0;
}