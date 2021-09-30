#include <iostream>

using namespace std;

int main()
{
    int n = 36, arr[8];
    int i = 0, hold = n; //res;
    for (i = 0; n > 0; i++)
    {
        //res = (hold >> i) & 1;
        //res = res & 1;
        n = n >> 1;
        //cout << res << endl;
        arr[i] = (hold >> i) & 1;
    }

    for (i = i - 1; i >= 0; i--)
        cout << arr[i];

    cout << endl;
    return 0;
}
