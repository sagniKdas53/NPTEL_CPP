#include<iostream>
using namespace std;

int &fun(int &x)
{
  x = 10;
  return x;
}
int main()
{
    int x = 1;
    cout << x << endl;
   int& save = fun(x) = 30;
   cout << fun(x) << endl << x;
   cout << endl << save << endl;
   return 0;
}