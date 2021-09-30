#include <iostream>
using namespace std;
int n =100;

void test(int& n1,int* n2,int n3){
    n++;
    cout << ((n1==n)?1:0) << '-' << ((&n1==&n)?1:0) << endl;
    cout << ((*n2==n)?1:0) << '-' << ((n2==&n)?1:0) << endl;
    cout << ((n3==n)?1:0) << '-' << ((&n3==&n)?1:0) << endl;
}

int main(){
    test(n,&n,n);
    return 0;
}