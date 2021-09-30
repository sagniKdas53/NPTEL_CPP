#include <iostream>
using namespace std;
int func(const int& x)
{
    return (x-1);
}
int main()
{
    int n = 5;
    cout << func(n+10);
    return 0;
}