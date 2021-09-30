#include <iostream>
#include <exception>
using namespace std;
class Parent
{
    void f() {}
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
        Child *c1 = static_cast<Child *>(pa);
        Child *c2 = static_cast<Child *>(pb);
        if (c1 == NULL)
            cout << "Bad Cast Child\n";
        if (c2 == NULL)
            cout << "Bad Cast Parent\n";
        if (c1 != NULL & c2 != NULL)
            cout << "Static cast Successful for Parent & Child";
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}