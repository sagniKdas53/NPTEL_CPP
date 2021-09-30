#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    Base(int _x) : x(_x) {}
}; class Derived : private Base
{
public:
    int y;
    Derived(int _x, int _y) : Base(_x), y(_y) {}
}; int main()
{
    Base b(10);
    Derived d(20, 30);
    cout << b.x << " ";
    cout << d.x;
    return 0;
}