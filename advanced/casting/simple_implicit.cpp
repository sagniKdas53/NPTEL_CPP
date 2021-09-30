#include <iostream>
using namespace std;
int main()
{

    int integer = 100000;
    float flater = 28349.32;
    cout << integer - flater << endl;  // we get float implicitly
    cout << -integer + flater << endl; // we get float implicitly
    cout << flater - flater << endl;   // we get int implicitly
    cout << flater - integer << endl
         << endl; // we get float implicitly

    integer = flater;
    cout << integer << endl; // we get float implicitly coveted to int

    integer = static_cast<int>(flater); // same as the above
    cout << integer << endl
         << endl; // we get float implicitly coveted to int

    integer = 100.324;
    cout << integer << endl;              // we get only the 100
    flater = static_cast<float>(integer); // same as the above
    cout << flater << endl;               // we get 100
    return 0;
}
/* static cast is done at runtime */