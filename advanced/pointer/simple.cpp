#include <iostream>
#include <sstream>

using namespace std;
struct sss
{
    int *d;
    int f;
    double dd;
} ds; // here no pointer
int ret(sss *in) // * makes it a pointer
{
    return in->f;
}
int main()
{
    int *p;
    *p = 5;
    cout << p << " : " << *p << endl;
    int d = 9;
    *p = d;
    cout << p << " : " << *p << endl;
    int e = 33;
    p = &e;
    cout << p << " : " << *p << endl;

    ds.f = e;
    cout << ret(&ds) << endl;  // & used to pass the address
    return 0;
}