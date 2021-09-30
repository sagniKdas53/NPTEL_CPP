#include <iostream>

using namespace std;

int &func(int &x){

    x--;

    return (++x);

} // End of func() definition 

int main() {
    int a, c;
    cin >> a >> c;
    int& b = func(a);
    cout << a << " " << b << " ";
    func(a) = c;
    cout << a << " " << b;
    return 0;
}