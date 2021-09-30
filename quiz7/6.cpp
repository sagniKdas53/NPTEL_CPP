#include <iostream>
#include <exception>
using namespace std;
class Parent
{
    virtual void f() {}
};
class Child : public Parent
{
    void f() {}
};
int main()
{
    try
    {
        Parent *pa = new Parent;
        Parent *pb = new Child;
        Child *c1 = dynamic_cast<Child *>(pa);
        if (c1 == 0)
            cout << "Bad Cast Parent";
        Child *c2 = dynamic_cast<Child *>(pb);
        if (c2 = 0)
            cout << "Bad Cast Child";
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}