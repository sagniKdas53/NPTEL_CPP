#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print() = 0;
};
void Base::print()
{
    cout << "Virtual Class";
}
int main()
{
    Base b; //LINE-1  -->  A class is abstract if it has at least one pure virtual function,
    //so base is abstarct and hence can't be used to amke object
    Base *pt = new Base; //LINE-2 --> same as above
    b.print();
    pt->print();
    return 0;
}