#include <iostream>
using namespace std;
struct One
{
    void func() { cout << "Struct"; }
};
void test(const One &o)
{
    //o.func();
    //o*->func();
}
int main()
{
    One t;
    t.func();
    test(t);
    return 0;
}