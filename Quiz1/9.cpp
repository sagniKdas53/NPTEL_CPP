#include<iostream>
using namespace std;
int main(){
int data[] = {1, 2, 3, 4, 5};
int *data_list[5] = {data + 1, data + 2, data + 3, data + 4, data};
int **data_ptr = data_list;
cout << **(data_ptr + 2) << " - ";
cout << *++data_ptr[2];
return 0;
}

//4 - 5