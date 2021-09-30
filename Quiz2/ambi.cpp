#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    const double dd = 37.66;
    const double *const dp =&dd;  //const double *
    cout << *dp;
    cout << endl << typeid(dp).name()<< endl;
    cout << endl << typeid(dd).name()<< endl;
    return 0;
}


//works  --> const double *const , double const*