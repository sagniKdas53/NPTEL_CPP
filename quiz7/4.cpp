#include <iostream>
using namespace std;
class B
{
public:
    B() { cout << "1"
               << " "; }
    B(int _x)
    {
        cout << "11"
             << " ";
    }
};
class D1 : virtual public B
{
public:
    D1() { cout << "2"
                << " "; }
    D1(int _x) : B(_x)
    {
        cout << "22"
             << " ";
    }
};
class D2 : virtual public B
{
public:
    D2() { cout << "3"
                << " "; }
    D2(int _x) : B(_x) { cout << "33"
                              << " "; }
};
class DD : public D1, public D2
{
public:
    DD() { cout << "4"
                << " "; }
    DD(int _x) : D1(_x), D2(_x)
    {
        cout << "44"
             << " ";
    }
};
int main()
{
    DD d(5);
    return 0;
}