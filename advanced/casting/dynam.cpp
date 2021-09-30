#include <iostream>
using namespace std;
#include <string.h>
/*
Dynamic casting is used in run time, so there needs to atleast be one virtual function in order to 
use dynamic casting.
*/
class Base
{
public:
    int x;
    virtual void set_x(int xx)
    {
        x = xx;
    }
    Base(int d) : x(d) {}
    virtual void print()
    {
        cout << "Base" << endl;
    }
};

// Derived1 class declaration
class Derived1 : public Base
{
public:
    int xx;
    virtual void set_x(int c)
    {
        xx = c;
        x = c / 2;
    }
    Derived1(int d) : xx(d), Base(d / 2) {}
    void print()
    {
        cout << "Derived1" << endl;
    }
};

// Derived2 class declaration
class Derived2 : public Base
{
public:
    int xx;
    virtual void set_x(int c)
    {
        xx = c;
        x = c / 2;
    }
    Derived2(int d) : xx(d), Base(d / 2) {}
    void print()
    {
        cout << "Derived2" << endl;
    }
};

// Driver Code
int main()
{
    Derived1 d1(10);

    cout << d1.xx << " " << d1.x << endl;

    // Base class pointer holding
    // Derived1 Class object
    Base *bp = dynamic_cast<Base *>(&d1);
    cout << "Base has no xx"
         << " " << bp->x << endl;

    // Dynamic_casting
    Derived1 *dp2 = dynamic_cast<Derived1 *>(bp);
    cout << dp2->xx << " " << dp2->x << endl;
    if (dp2 == nullptr)
        cout << "null" << endl;
    else
        cout << "not null" << endl;

    return 0;
}