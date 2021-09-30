#include <iostream>
using namespace std;
class class1
{

    int a = 5;
    friend class class2;
    //LINE-t
};
class class2
{

public:
    void display(class1 &c)
    {
        cout << c.a;
    }
};
int main()
{

    class1 c1;

    class2 c2;

    c2.display(c1);

    return 0;
}