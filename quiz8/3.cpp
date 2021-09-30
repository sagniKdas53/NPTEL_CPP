#include <iostream>
using namespace std;
class ExcepA
{
};
class ExcepB : public ExcepA
{
};
class ExcepC : public ExcepB
{
};
void throw_exception(int t)
{
    try
    {
        t == 0 ? throw ExcepC() : throw new ExcepB(); //LINE-1
    }
    catch (ExcepA &e)
    {
        cout << "ExcepA ";
    } //LINE-2
    catch (ExcepB &e)
    {
        cout << "ExcepB ";
    } //LINE-3
    catch (ExcepC &e)
    {
        cout << "ExcepC ";
    } //LINE-4
}
int main()
{
    try
    {
        throw_exception(0);
        throw_exception(1);
    }
    catch (ExcepA *e)
    {
        cout << "ExcepA*";
    } //LINE-5
    catch (ExcepB *e)
    {
        cout << "ExcepB*";
    } //LINE-6
    catch (ExcepC *&)
    {
        cout << "ExcepC*";
    } //LINE-T
    catch (...)
    {
        cout << "ALL";
    } //LINE-8
    return 0;
}