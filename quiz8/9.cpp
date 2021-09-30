#include <iostream>
using namespace std;
template <class T>
class Adder
{
    T n;
    public:
    Adder(T _n) : n(_n) {}
    T add(Adder<T>& t) { return n + t.n; }
};
int main()
{
    Adder<int> a(30);
    Adder<int> b(60);
    Adder<double> c(6.89);
    Adder<double> d(5.21);
    cout << a.add(b) << endl; //LINE-1
    //cout << a.add(c) << endl;
    cout << d.add(c) << endl;
    //cout << d.add(b) << endl;
    return 0;
}