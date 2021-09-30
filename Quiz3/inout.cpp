#include <iostream>

using namespace std;

class Inner
{
    int x;

public:
    Inner(int c) : x(c) { cout << c << " "; }

    ~Inner() { cout << x << " "; }
};

class Outer
{

    Inner *y, *x; //LINE-1: declare data-members

public:
    Outer(int a, int b) : x(new Inner(a)), y(new Inner(b)) {}  // second one gets eecuted first

    ~Outer() { x->~Inner();y->~Inner(); } //LINE-2: free the data-members
};

int main()
{

    int a=10, b=20;

    //cin >> a >> b;

    Outer(a, b);

    return 0;
}