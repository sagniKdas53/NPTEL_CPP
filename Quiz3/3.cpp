#include <iostream>
using namespace std;
int i = 10;
class Data
{
    int i;
    int elem1[5];
    int *elem2;

public:
    Data() : i(20), elem2(new int[i]) {}
    int show()
    {
        int i = 30;
        cout << i << " "; //LINE-1
        return this->i;
    }
};
int main()
{
    Data d;
    cout << d.show() << " " << sizeof(d);
    cout << " " << sizeof(int) << " " << sizeof(int *)<< " " << sizeof(void *) << " "; //LINE-2
    cout << " " << sizeof(double) << " " << sizeof(long *)<< " " << sizeof(double *) << endl;
    return 0;
}