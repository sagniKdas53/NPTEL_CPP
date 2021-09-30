#include <iostream>
using namespace std;
int pow2(int i)
{
    int ree = 2;
    for (int o = 1; o < i; o++)
        ree *= 2;
    return ree;
}
unsigned int to_dec(int *arr)
{
    unsigned int res = 0;
    for (int i = 0; i < 32; i++)
    {
        if (arr[i] == 1)
        {
            //cout << i << endl;
            res += pow2(31 - i);
        }
    }
    if (arr[31] == 1)
        return res - 1; // this is to adjust for 0
    else
        return res;
}

int *no_rev_bin(int n)
{
    int hold = n, d = 31; //res;
    int *arr = (int *)calloc(32, sizeof(int));
    for (int i = 0; n > 0; i++)
    {
        //res = (hold >> i) & 1;
        //res = res & 1;
        n = n >> 1;
        //cout << res << endl;
        arr[d--] = (hold >> i) & 1;
    }
    return arr;
}

int main()
{
    int a, bin_a[32];
    int arr[] = {1, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 1};
    cin >> a;
    int *res = no_rev_bin(a);
    for (int i = 0; i < 32; i++)
    {
        if (i%4 == 0 && i!=0)
            cout << " ";
        cout << res[i];
        
    }
    cout << endl;
    //cout << pow2(3);
    cout << to_dec(res) << endl;
    return 0;
}