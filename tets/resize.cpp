// FileName:Array_Resize_c++.cpp:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the no. of elements: ";
    int count, j, sum = 0;
    cin >> count;
    vector<int> arr;   // Default size
    arr.resize(count); // Set resize
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "Array Sum: " << sum << endl;
    vector<int> rra;
    sum =0;
    for (int i = 0; i < count+10; i++)
    {
        rra.push_back(i);
    }
    //rra.resize(count);
    for (int i = 0; i < rra.size(); i++)
    {
        sum += rra[i];
    }
    cout << "Array Sum: " << sum << endl;
    return 0;
}