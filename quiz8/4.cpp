#include <iostream>

using namespace std;

class ExcepA
{
};

class ExcepB : public ExcepA
{
};

class ExcepC : public ExcepA
{
};

int main()
{
    try
    {

        throw new ExcepB();
    }
    catch (...)
    {
        cout << "ALL ";
    } //LINE-1
    catch (ExcepA *e)
    {
        cout << "ExcepA* ";
    }
    catch (ExcepB *e)
    {
        cout << "ExcepB* ";
    }
    catch (ExcepC *e)
    {
        cout << "ExcepC* ";
    }
    return 0;
}
