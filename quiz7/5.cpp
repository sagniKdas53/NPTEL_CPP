#include <iostream>
using namespace std;
class C1
{
    int a = 10;
};
class C2
{
public:
    int b = 20;
};
int main()
{
    C1 u;
    C2 *v = reinterpret_cast<C2 *>(&u);
    cout << v->b;
    return 0;
}
