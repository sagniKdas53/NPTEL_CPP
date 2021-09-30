#include <iostream>
using namespace std;
template <typename T>
T get(T arr)
{
    arr[2] = 4;
    return arr;
}
int main()
{
    int arr[] = {1, 2, 3}; //cout --> location
    int ar[8] = {1, 2, 3}; //cout --> loaction
    int arre = {};         //cout --> 0
    int *bc;               //cout --> loaction
    int *b = {};           //cout --> 0
    int *c = arr;          // cout --> location of arr
    /*
    cout << arr << endl;
    cout << c << endl;
    cout << *c << endl;*/

    int *ptr;
    ptr = arr;
    //ptr = 8; //a value of type "int *" cannot be assigned to an entity of type "int" C/C++(513)
    cout << ptr << endl;

    int a[5] = {1, 2, 3}; //cout -->
    int *resl;
    resl = arr;
    cout << resl[2] << endl;
    int *catche = get<int *>(arr);
    cout << catche[2] << endl;
    return 0;
}