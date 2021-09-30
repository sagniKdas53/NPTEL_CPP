#include <iostream>

using namespace std;

#define SQR(x) (x*(x)) //LINE-1: complete the macro definition

int main()
{

    int i=20, j=-10;

    //cin >> i >> j;
    cout << (i + j);
    j = SQR(i + j);

    cout << j << endl;

    return 0;
}