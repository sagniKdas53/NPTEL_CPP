#include <iostream>
#include <exception>
using namespace std;

class Base : public exception
{
public:
    int x;

    void Test()
    {
        try
        {
            throw("hello");
        }
        catch (const char *cc)
        {
            cout << cc << endl;
            throw;
        }
    }
};

class Der1 : virtual public Base
{
private:
    int f = 0;

public:
    Der1(int d) : f(d) {}
};

int main()
{
    Base bs;
    try
    {
        try
        {
            bs.Test();
        }
        catch (const char *dd)
        {
            cout << dd << endl;
            throw dd;
        }
    }
    catch (const char *dd)
    {
        cout << dd << endl;
    }
    return 0;
}