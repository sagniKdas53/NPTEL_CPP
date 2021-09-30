#include <iostream>
using namespace std;
class B
{
public:
    void fun() { cout << "B::fun()" << endl; }
};
class D : public B
{
public:
    using B::fun;
    void fun(int i) { cout << "D::fun()" << endl; }
};
int main()
{
    D t1;
    t1.fun();
    t1.fun(5);
    return 0;
}