#include <iostream>
using namespace std;
class C1
{
public:
    C1(int x = 0) { 
       // cout << x << " ";
        cout << "IN C1" << endl;
         }
    void fun(int i) { cout << i << " "; }
};

class C2 : public virtual C1
{ // LINE-1 : Inherit from class C1
public:
    C2(int x = 0) : C1(++x) { 
        //fun(x);
        cout << "IN C2" << endl;
         }
};
class C3 : public virtual C1
{ // LINE-2 : Inherit from class C1
public:
    C3(int x = 0) : C1(++x) { 
        //fun(x);
        cout << "IN C3" << endl; 
         }
};
class CC : public  C2, public  virtual C3
{ // LINE-3 : Inherit from class C2 and C3

public:
    CC(int i = 0) : C2(i * 2), C3(++i)
    {
        //fun(i);
        cout << "IN CC"  << endl;
    }
};
int main()
{
    int i;
    cin >> i;
    CC obj(i);
    return 0;
}

/* 
Order of initilaiztion as C1 is virtual it get's init only once then c3 c2 and finally CC
IN C1
IN C3
IN C2
IN CC

*/