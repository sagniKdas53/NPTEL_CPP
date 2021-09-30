#include <iostream>
using namespace std;
namespace A
{
    int x = 5;
    int y = 10;
}
namespace B
{
    int x = 3.14;
    int y = 2.74;
}
int main()
{
    using A::x;
    using B::y;
    bool a, b;
    a = x > y;
    b = A::y < B::x;
    cout << a << b;
    return 0;
}