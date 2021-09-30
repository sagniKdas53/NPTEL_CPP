#include <iostream>
using namespace std;
int data = 0; //LINE-1
class Test
{
public:
    Test() { data++; }  //LINE-2
    ~Test() { data++; } //LINE-3
};
int incr()
{
    data++; //LINE-4
    {
        Test obj;
    }                    //LINE-5
    cout << data << " "; //LINE-6
    return data++;
}
int main()
{
    cout << incr() << " "; //LINE-T
    cout << data << endl;
    return 0;
}