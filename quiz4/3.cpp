#include <iostream>
using namespace std;
class myClass
{
    static int a;

public:
    myClass() { a++; }
    static int get() { return a; }
};
int myClass::a = 0;
int main()
{
    cout << myClass::get() << " ";
    myClass n[5];
    cout << myClass::get();
    return 0;
}