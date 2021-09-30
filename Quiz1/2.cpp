#include<iostream>
using namespace std;
int main(){
double darray[] = {1.12, 2.12, 3.33, 4.43, 5.36};
double *dp = darray + 4;
for(int i = 0; i < 5; i++)
cout << *(dp-i) << " ";
return 0;
}

//5.36 4.43 3.33 2.12 1.12