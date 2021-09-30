#include <iostream>
using namespace std;
template <int n> //LINE-1
void display(string val)
{
    n = 7; //LINE-2
    for (int i = 0; i < n; i++)
        cout << val << " ";
}
int main()
{
    display<5>("hi");
    return 0;
}