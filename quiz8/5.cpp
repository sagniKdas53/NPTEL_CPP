#include <iostream>
using namespace std;
namespace errors
{
    class ExcepA
    {
    };
    class ExcepB
    {
    };
    class ExcepC
    {
    };
    void throw_exception();
}
void errors::throw_exception()
{
    ExcepA *ea = new ExcepA();
    ExcepB *eb = new ExcepB();
    ExcepC *ec = new ExcepC();
    try
    {
        throw ExcepC(); //LINE-1
    }
    catch (ExcepA &e)
    {
        cout << "ExcepA ";
        throw ec;
    } //LINE-2
    catch (ExcepB &e)
    {
        cout << "ExcepB ";
        throw ea;
    } //LINE-}
    catch (ExcepC &e)
    {
        cout << "ExcepC ";
        throw eb;
    } //LINE-4
}
int main()
{
    try
    {
        errors::throw_exception();
    }
    catch (errors::ExcepA *e)
    {
        cout << "ExcepA* ";
    } //LINE-5
    catch (errors::ExcepB *e)
    {
        cout << "ExcepB* ";
    } //LINE-6
    catch (errors::ExcepC *e)
    {
        cout << "ExcepC* ";
    } //LINE-7
    catch (...)
    {
        cout << "ALL ";
    } //LINE-8
    return 0;
}