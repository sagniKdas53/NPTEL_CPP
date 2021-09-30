#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int elem[5];
for(int i = 1; i <= 5; i++)
*(elem + i - 1) =i * 10;
rotate(elem, elem + 4, elem + 5);
rotate(elem, elem + 1, elem + 4);
for (int i = 0; i < 5; ++i)
cout << elem[i] << " ";
return 0;
}