#include <iostream>
using namespace std;
namespace test
{
    int i = 5;
}
int i()
{
    using namespace test;
    int i;
    i = 9;
    return i;
}
int main()
{
    cout << ::i() << test :: i;
    return 0;
}