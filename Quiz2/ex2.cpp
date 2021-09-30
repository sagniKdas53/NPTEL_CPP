#include <iostream>

using namespace std;

int multi(int=1,int=1,int=1);    //LINE-1: Complete function prototype
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << multi() << ", "; 
    cout << multi(a) << ", ";
    cout << multi(a, b) << ", "; 
    cout << multi(a, b, c) << endl;
    return 0;
}

int multi(int a, int b, int c) {   

    return a * b * c;
}