#include <iostream>
#include <algorithm>
using namespace std;
int main () {
int data[] = {50, 30, 40, 10, 20};
sort (data, &data[4]);
for (int i =0; i< 5; i++)
cout << data[i] << " ";
return 0;
}

//10 30 40 50 20 