#include <iostream>
using namespace std;

static volatile int myval = 1;

void f(void){
    myval = 0;
}

int main(){
    f();
    cout << myval << endl;
    return  0;
}