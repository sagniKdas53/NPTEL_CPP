#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;
const int *p = &a; // LINE-1: allocate and initialize
    cout << *p << ", " << 1[p];

    return 0;
}