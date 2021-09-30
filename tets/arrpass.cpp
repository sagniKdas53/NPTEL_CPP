#include <iostream>
using namespace std;

void funcP(int *arr)
{
    int i = sizeof(arr) / sizeof(arr[0]);
    cout << i << endl;
    cout << endl;
}
void funcPP(int arr[])
{
    int i = sizeof(arr) / sizeof(arr[0]);
    cout << i << endl;
    cout << endl;
}
void funcPPP(int arr[10])
{
    int i = sizeof(arr) / sizeof(arr[0]);
    cout << i << endl;
    cout << endl;
}
int main()
{
    int a = 1, c = 4;
    //typedef int& ref;
    int arr[] = {0, a, 2, 3, c, 5, 6, 7};
    //ref refarr[] = {arr,a,c};
    int i = sizeof(arr) / sizeof(arr[0]);
    cout << i << endl;
    cout << endl;
    funcP(arr);
    funcPP(arr);
    funcPPP(arr);
    return 0;
}