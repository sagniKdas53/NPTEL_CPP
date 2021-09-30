#include <iostream>

using namespace std;

int &func(int &x) /* here the function itself is a bariable that can be assigned an address,
 so its a function pointer, and it takes in a pointer that is incremented by one and decrimented by one
 actually the order is opposite but that's irrelevent. So we get the original pointer back as the result
*/{

    x--;

    return (++x);

} // End of func() definition

int main()
{
    int a = 2, c = 3;
    int &b = func(a);
    //cin >> a >> c;
    cout << a << " " << b << " " << c << endl;

    cout << a << " " << b << " " << c << endl;
    func(a) = c; // entire function func(a) is assigned as 10 but &b is pointed to func(a) so it is also 10
    cout << a << " " << b << " " << c << endl;
    func(c) = a;
    cout << a << " " << b << " " << c << endl;
    int g = 5;
    b = g;
    cout << a << " " << b << " " << c << endl;

    return 0;
}
/*
./a.out 
2 2 3
2 2 3
3 3 3
3 3 3
5 5 3

referecne: https://stackoverflow.com/questions/18964801/assigning-value-to-function-returning-reference
*/