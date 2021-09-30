#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    Base() : a(0) {}
    Base(int _a) : a(_a) {}
    void setA(int x) { a = x;
    cout << "a: " << a << endl;
     }
};
class Derived : private Base
{
public:
    Derived(int x) : Base(x) {}
    void print()
    {
        Base *bb = new Base;
        bb->setA(20);
        cout << a;
        cout << endl << bb->a << endl;
    };
};
int main()
{
    Derived d(10);
    d.print();
    return 0;
}