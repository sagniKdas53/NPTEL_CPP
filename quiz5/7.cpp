#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    A(int _a = 0) : a(_a) {}
};
class B : public A
{
    A t1;

public:
    B(int x, A t) : A(x), t1(t) {}
    void print() { cout << a; }   //LINE-1
    void show() { cout << t1.a; } //LINE-2
};
int main()
{
    A t1(1);
    B t2(2, t1);
    t2.print();
    t2.show();
    return 0;
}