#include <iostream>
using namespace std;

class Base
{
protected:
    int s;

public:
    Base(int i = 0) : s(i) {}

    virtual ~Base() {} //LINE-1
    virtual void fun(int); //LINE-2
};

class Derived : public Base
{
public:
    Derived(int i) : Base(i) {}
    ~Derived();
    int fun(int x)
    {
        return s * x;
    }
};

class Wrapper
{

public:
    void fun(int a, int b)
    {

        Base *t = new Derived(a); //LINE-3

        int i = t->fun(b);
        cout << i << " ";
        delete t;
    }
};

Derived::~Derived() { cout << --s << " "; }

int main()
{
    int i, j;
    cin >> i >> j;
    Wrapper w;
    w.fun(i, j);
    return 0;
}