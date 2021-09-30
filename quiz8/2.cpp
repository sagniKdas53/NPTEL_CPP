#include <iostream>
using namespace std;
void test_i(int i)
{
    try
    {
        if (i < 0)
            throw "negetive";
        else if (i == 0)
            throw 0;
        else
            throw i * 1.00;
    }
    catch (int i)
    {
        cout << "int ";
    } //LINE-1
    catch (float i)
    {
        cout << "float ";
    } //LINE-2
    catch (const char *i)
    {
        cout << "char *";
    } //LINE-}
}
int main()
{
    try
    {
        test_i(0);
        test_i(1);
        test_i(-1);
    }
    catch (...)
    {
        cout << "ALL";
    } //LINE-4
}
