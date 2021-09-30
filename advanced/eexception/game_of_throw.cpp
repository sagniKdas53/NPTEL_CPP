#include <iostream>
#include <exception>
using namespace std;
class A : public exception
{
};
class B : public exception
{
};
class UsrExcp : public exception
{
    const char *name = "UsrExcp";

public:
    const char *what()
    {
        return name;
    }
    void whatis()
    {
        cout << "UsrExcp" << endl;
    }
};
class ExpUsr : public exception
{
    const char *name = "ExpUsr";

public:
    const char *what()
    {
        return name;
    }
    void whatis()
    {
        cout << "ExpUsr" << endl;
    }
};
void g(int d)
{
    if (d == 0)
        throw UsrExcp();
    else
        throw ExpUsr();
}
void h()
{
    throw UsrExcp();
}
void f()
{
    int i = 0;
    try //first try
    {
        try //second try
        {
            g(0);
            h();
        }
        catch (UsrExcp &ex) //second catch
        {
            cout << i++ << " :: " << ex.what() << endl;
            try //third try
            {
                g(1);
            }
            catch (ExpUsr &dd) //third catch
            {
                cout << i++ << " :: " << dd.what() << endl;
            }
            // if no catch block to catch this, then err
            h(); //---> works here
        }
        catch (ExpUsr &ex) //second catch case 2
        {
            cout << i++ << " :: " << ex.what() << endl;
            h(); //---> works here
        }
    }
    catch (UsrExcp &ex) //first catch case 1
    {
        cout << i++ << " :: " << ex.what() << endl;
        //cout << ex.whatis();
    }
    catch (ExpUsr &ex) // first catch case 2
    {
        cout << i++ << " :: " << ex.what() << endl;
        //cout << ex.whatis();
        h(); //---> works here
    }
}
int main()
{
    f();
    return 0;
}