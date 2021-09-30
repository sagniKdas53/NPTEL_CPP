#include <iostream>

using namespace std;

class Base1
{
protected:
    int b1;

public:
    Base1(int b) : b1(b) {}
};

class Base2
{
protected:
    int b2;

public:
    Base2(int b) : b2(b) {}
};

class Derived : public Base1, public Base2
{ //LINE-1

    int d;

public:
    Derived(int x) : d(x), Base1(x + 1), Base2(x + 2) {} //LINE-2

    void show()
    {

        cout << d << ", " << b1 << ", " << b2;
    }
};

int main()
{
    int x;
    cin >> x;
    Derived t1(x);
    t1.show();
    return 0;
}