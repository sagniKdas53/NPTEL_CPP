#include <iostream>
using namespace std;
class A
{
public:
    virtual void fun() = 0;
};
class B
{
public:
    virtual void fun() {}
};
class C
{
    int x;

public:
    void fun() {}
};
int main()
{
    cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C);
    return 0;
}