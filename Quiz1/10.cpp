#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int data[] = { 10, 20, 30, 40, 50 };
for (int i =0; i< 1; i++) {
int j = data[i];
replace(data, data + 5, j, *(data + 4 - i));
//replace(data, data + 5, data[4-i], j);   
//replace(data+i+1, data + 5, data[4-i],j); // 50 20 30 40 10 ok
//replace(&data[i+1], &data[5], data[4-i],j);  //50 20 30 40 10 ok
//replace(&data[i+1], &data[5], &data[4-i],j);
}
for (int i = 0; i < 5; ++i)
cout << data[i] << " ";
return 0;
}
// can't do it yet
// output: 50 20 30 40 10