#include <iostream>
using namespace std;
int main()
{
    try
    {
        int d = 1 / 0;
    }
    catch (...)
    {
        cout << "endl";
    }
}