#include <iostream>
using namespace std;
template <class T, int N> //LINE-1
T sumArray(T a[])
{
    T sum = (T)0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int iArr[] = {5, 4, 6, 7};
    const int n1 = sizeof(iArr) / sizeof(*iArr); //LINE-2
    cout << sumArray<int, n1>(iArr) << " ";
    double dArr[] = {10.1, 20.4, 30.7, 40.5, 50.2};
    const int n2 = sizeof(dArr) / sizeof(*dArr); //LINE-3
    cout << sumArray<double, n2>(dArr);
    return 0;
}