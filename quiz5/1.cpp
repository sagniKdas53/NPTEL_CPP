#include <iostream>
using namespace std;
class A
{
public:
    void fun() { cout << "Class A"; }
};

class B : public A
{
    int x = 10;

public:
    void fun(int a) { cout << x; }
};
int main()
{
    B t1;
    t1.fun();
    return 0;
}